//
// Created by Кирилл on 09.04.2020.
//

#include "Gameplay.h"
#include "string"
#include "../helpers/Draw.h"

Gameplay::Gameplay() {
    if (TTF_Init() < 0) std::cerr << "Could not initialize SDL_ttf" << std::endl;

    this->font = TTF_OpenFont("Pixeboy-z8XGD.ttf", 70);
    if (!this->font) std::cerr << "Could not load font " << TTF_GetError() << std::endl;

    platformPosition.x = SCREEN_X / 2 - PLATFORM_SIZE / 2;
    platformPosition.y = SCREEN_Y - 50;

    // start at platform
    ballPosition.x = SCREEN_X / 2;
    ballPosition.y = SCREEN_Y - 100 - 5;
    ballVelocity.x = 1;
    ballVelocity.y = -1;
}

Gameplay::~Gameplay() {
    if (!this->font) TTF_CloseFont(this->font);

    TTF_Quit();
    SDL_Quit();
}

void Gameplay::Update(double delta) {
    ballVelocity.normalize();
    ballPosition.x += std::round(ballVelocity.x);
    ballPosition.y += std::round(ballVelocity.y);

    std::cout << "vx: " << ballVelocity.x << " vy: " << ballVelocity.y << "\n";
    std::cout << "x: " << ballPosition.x << " y: " << ballPosition.y << "\n";
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
               platformPosition.x, platformPosition.y,
               PLATFORM_SIZE, 25);
    // === ball ===
    // todo: show/hide gizmo
    auto norm = ballVelocity.normalize() * 30;
    Draw::Line(rR,
            ballPosition.x + BALL_SIZE/2, ballPosition.y + BALL_SIZE/2,
            ballPosition.x + BALL_SIZE/2 + (int) norm.x, ballPosition.y + BALL_SIZE/2 + (int) norm.y);
    Draw::Rect(rR,
            ballPosition.x, ballPosition.y,
            BALL_SIZE, BALL_SIZE);
}

void Gameplay::LeftMousePressedEvent(int x, int y) {
}

void Gameplay::MouseMove(int x, int y) {
    // платформа двигается за мышкой
    if (5 + PLATFORM_SIZE / 2 < x && x < SCREEN_Y - 5 - PLATFORM_SIZE / 2)
        this->platformPosition.x = x - PLATFORM_SIZE / 2;
}

void Gameplay::drawBlocks(SDL_Renderer *rR) {
    for (auto & brick : this->state.getGrid()) {
        if (brick.active == false) continue;
        Draw::Rect(rR,
                   brick.position.x, brick.position.y,
                   brick.position.w, brick.position.h);
    }
}
