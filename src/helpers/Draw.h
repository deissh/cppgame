//
// Created by Кирилл on 09.04.2020.
//

#ifndef CPPGAME_DRAW_H
#define CPPGAME_DRAW_H

#include "SDL.h"
#include "SDL_ttf.h"
#include "string"

class Draw {
public:
    static void Rect(SDL_Renderer* rR, int X, int Y, int W, int H) {
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

    static void Text(SDL_Renderer* rR, TTF_Font* font, const std::string& sText, int X, int Y, int W, int H) {
        SDL_Color White = {255, 255, 255};

        SDL_Surface* surfaceMessage = TTF_RenderText_Solid(font, sText.data(), White);

        SDL_Texture* Message = SDL_CreateTextureFromSurface(rR, surfaceMessage);

        SDL_Rect Message_rect; //create a rect
        Message_rect.x = X;  //controls the rect's x coordinate
        Message_rect.y = Y; // controls the rect's y coordinte
        Message_rect.w = W; // controls the width of the rect
        Message_rect.h = H; // controls the height of the rect

        SDL_RenderCopy(rR, Message, NULL, &Message_rect);
    }
};


#endif //CPPGAME_DRAW_H
