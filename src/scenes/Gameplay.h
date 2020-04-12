//
// Created by Кирилл on 09.04.2020.
//

#ifndef CPPGAME_GAMEPLAY_H
#define CPPGAME_GAMEPLAY_H

#include <iostream>
#include <cmath>
#include "vector"
#include "SDL.h"
#include "SDL_ttf.h"
#include "../helpers/vec2.h"

// todo: configurations
#define SCREEN_X 800
#define SCREEN_Y 800

#define PLATFORM_SIZE 150
#define BALL_SIZE 25

#define GRID_MIN_H 100
#define BLOCK_W 20
#define BOARD_W_COUNT 5
#define BOARD_H_COUNT 5

class Brick {
public:
    SDL_Rect position;
    bool active = true;
};
typedef std::vector<Brick> Grid;

class State {
private:
    int score = 0;


    void createGrid() {
        // todo: presets
        // убираем края что бы блоки не спавнились там
        auto w = SCREEN_X - 5;
        auto blockW = w / BOARD_W_COUNT;

        bricks.resize(BOARD_H_COUNT * BOARD_W_COUNT, Brick());

        for (auto i = 0; i < BOARD_W_COUNT; i++) for (auto j = 0; j < BOARD_H_COUNT; j++) {
            auto idx = j + BOARD_H_COUNT * i;
            this->bricks[idx].position.x = blockW * i + 5;
            this->bricks[idx].position.y = BLOCK_W * j + GRID_MIN_H;
            this->bricks[idx].position.w = blockW;
            this->bricks[idx].position.h = BLOCK_W;
        }
    }

public:
    State() { createGrid(); };

    void addScore(int value) { this->score += value; }
    auto getScore() { return this->score; }

    Grid bricks;
};


class Gameplay {
private:
    TTF_Font* font;
    State state;

    SDL_Rect platform;
    vec2<int> ballPosition;
    vec2<float> ballVelocity;

    void drawBlocks(SDL_Renderer *rR);
    bool in_collision(struct SDL_Rect r2);
    void checkCollision();

    void reset();

public:
    Gameplay();
    ~Gameplay();

    void Update(double delta);
    void Draw(SDL_Renderer* rR);

    void LeftMousePressedEvent(int x, int y);
    void MouseMove(int x, int y);

    void enter();
    void escape();
};


#endif //CPPGAME_GAMEPLAY_H
