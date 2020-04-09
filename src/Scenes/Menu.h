//
// Created by Кирилл on 09.04.2020.
//

#ifndef CPPGAME_MENU_H
#define CPPGAME_MENU_H

#include "SDL.h"
#include "SDL_ttf.h"

class Menu {
private:
    TTF_Font* font;

public:
    Menu();
    ~Menu();

    void Update(double delta);
    void Draw(SDL_Renderer* rR);

    void enter();
    void escape();
};


#endif //CPPGAME_MENU_H
