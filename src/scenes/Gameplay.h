//
// Created by Кирилл on 09.04.2020.
//

#ifndef CPPGAME_GAMEPLAY_H
#define CPPGAME_GAMEPLAY_H

#include "SDL.h"
#include "SDL_ttf.h"

class State {
private:
    int score = 0;
public:
    void addScore(int value) { this->score += value; }
    int getScore() { return this->score; }
};


class Gameplay {
private:
    TTF_Font* font;
    State state;

public:
    Gameplay();
    ~Gameplay();

    void Update(double delta);
    void Draw(SDL_Renderer* rR);

    void LeftMousePressedEvent(int mouseX, int mouseY);
    void MouseMove(int mouseX, int mouseY);

    void enter();
    void escape();
};


#endif //CPPGAME_GAMEPLAY_H
