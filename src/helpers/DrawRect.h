//
// Created by Кирилл on 09.04.2020.
//

#ifndef CPPGAME_DRAWRECT_H
#define CPPGAME_DRAWRECT_H

#include "SDL.h"
#include "SDL_ttf.h"
#include "string"

class DrawRect {
public:
    static void Simple(SDL_Renderer* rR, int X, int Y, int W, int H) {
        SDL_Rect rect; //create a rect
        rect.x = X;  //controls the rect's x coordinate
        rect.y = Y; // controls the rect's y coordinte
        rect.w = W; // controls the width of the rect
        rect.h = H; // controls the height of the rect

        SDL_SetRenderDrawColor(rR, 255, 255, 255, 255);
        SDL_RenderDrawRect(rR, &rect);
        SDL_SetRenderDrawColor(rR, 0, 0, 0, 255);
        SDL_RenderPresent(rR);
    }
};


#endif //CPPGAME_DRAWRECT_H
