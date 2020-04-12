//
// Created by Кирилл on 09.04.2020.
//

#include "Gameplay.h"
#include "string"
#include "../helpers/Draw.h"
#include "../Global.h"

Gameplay::Gameplay() {
    if (TTF_Init() < 0) std::cerr << "Could not initialize SDL_ttf" << std::endl;

    this->font = TTF_OpenFont("Pixeboy-z8XGD.ttf", 70);
    if (!this->font) std::cerr << "Could not load font " << TTF_GetError() << std::endl;

    reset();
}

Gameplay::~Gameplay() {
    if (!this->font) TTF_CloseFont(this->font);

    TTF_Quit();
    SDL_Quit();
}

void Gameplay::Update(double delta) {
    if (ballPosition.y >= SCREEN_Y || state.getScore() == state.bricks.size()) {
        // switch active scene
        Global::getSM()->scene = Global::getSM()->sMainMenu;
        // reset all stats
        state = State();
        // setup default positions
        reset();
        return;
    }

    checkCollision();

    ballPosition.x += std::round(ballVelocity.x) * 5;
    ballPosition.y += std::round(ballVelocity.y) * 5;
}

void Gameplay::Draw(SDL_Renderer *rR) {
    // === GUI ===
    Draw::Text(rR, this->font, "Scores: " + std::to_string(this->state.getScore()),
            5, 5,
            100, 25);

    Draw::Rect(rR,
               5, 35,
               SCREEN_X - 10, SCREEN_Y - 10);
    // === blocks ===
    this->drawBlocks(rR);
    // === platform ===
    Draw::Rect(rR,
               platform.x, platform.y,
               platform.w, platform.h);
    // === ball ===
    // todo: show/hide gizmo
//    auto norm = ballVelocity * 30;
//    Draw::Line(rR,
//            ballPosition.x + BALL_SIZE/2, ballPosition.y + BALL_SIZE/2,
//            ballPosition.x + BALL_SIZE/2 + (int) norm.x, ballPosition.y + BALL_SIZE/2 + (int) norm.y);
    Draw::Rect(rR,
            ballPosition.x, ballPosition.y,
            BALL_SIZE, BALL_SIZE);
}

void Gameplay::LeftMousePressedEvent(int x, int y) {
}

void Gameplay::MouseMove(int x, int y) {
    // платформа двигается за мышкой
    if (5 + PLATFORM_SIZE / 2 < x && x < SCREEN_Y - 5 - PLATFORM_SIZE / 2)
        this->platform.x = x - PLATFORM_SIZE / 2;
}

void Gameplay::drawBlocks(SDL_Renderer *rR) {
    for (auto & brick : this->state.bricks) {
        if (brick.active == false) continue;
        Draw::Rect(rR,
                   brick.position.x, brick.position.y,
                   brick.position.w, brick.position.h);
    }
}

bool Gameplay::in_collision(struct SDL_Rect r2) {
    // Exit with no intersection if found separated along an axis
    if (ballPosition.y > r2.y + r2.h || ballPosition.y + BALL_SIZE < r2.y) return false;
    if (ballPosition.x < r2.x || ballPosition.x + BALL_SIZE > r2.x + r2.w) return false;

    return true;
}

void Gameplay::checkCollision() {
    if (ballPosition.x > SCREEN_X - 5 - BALL_SIZE || ballPosition.x <= 5) ballVelocity.x *= -1;
    if (ballPosition.y < 35 ) ballVelocity.y *= -1;
    if (in_collision(platform)) ballVelocity.y = -1;

    for (auto i = 0; i < BOARD_W_COUNT; i++) for (auto j = 0; j < BOARD_H_COUNT; j++) {
        auto idx = j + BOARD_H_COUNT * i;
        if (!state.bricks[idx].active) continue;
        if (in_collision(state.bricks[idx].position)) {
            ballVelocity.y *= -1;
            state.bricks[idx].active = false;
            state.addScore(1);
        }
    }
}

void Gameplay::reset() {
    platform.x = SCREEN_X / 2 - PLATFORM_SIZE / 2;
    platform.y = SCREEN_Y - 50;
    platform.h = 25;
    platform.w = PLATFORM_SIZE;

    // start at platform
    ballPosition.x = SCREEN_X / 2;
    ballPosition.y = SCREEN_Y - 100 - 5;
    ballVelocity.x = 0.5;
    ballVelocity.y = -1;
}
