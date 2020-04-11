//
// Created by Кирилл on 09.04.2020.
//

#ifndef CPPGAME_GAMEPLAY_H
#define CPPGAME_GAMEPLAY_H

#include "iostream"
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
#define BOARD_W_COUNT 10
#define BOARD_H_COUNT 5

class Brick {
public:
    SDL_Rect position;
    bool active;
};
typedef std::vector<Brick> Grid;

class State {
private:
    int score = 0;
    Grid bricks;

    void createGrid() {
        // todo: presets
        // убираем края что бы блоки не спавнились там
        auto w = SCREEN_X - 5;
        auto blockW = w / BOARD_W_COUNT;

        bricks.resize(BOARD_H_COUNT * BOARD_W_COUNT);

        for (auto i = 0; i < BOARD_W_COUNT; i++) for (auto j = 0; j < BOARD_H_COUNT; j++) {
            auto idx = j + BOARD_H_COUNT * i;
            this->bricks[idx].position.x = blockW * i + 5;
            this->bricks[idx].position.y = BLOCK_W * j + GRID_MIN_H;
            this->bricks[idx].position.w = blockW;
            this->bricks[idx].position.h = BLOCK_W;

            this->bricks[idx].active = true;
        }
    }

public:
    State() { createGrid(); };

    void addScore(int value) { this->score += value; }
    auto getScore() { return this->score; }

    Grid getGrid() { return this->bricks; };
};


class Gameplay {
private:
    TTF_Font* font;
    State state;

    vec2<int> platformPosition;
    vec2<int> ballPosition;

    void drawBlocks(SDL_Renderer *rR);

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
