//
// Created by Кирилл on 04.04.2020.
//

// https://github.com/jakowskidev/uMario_Jakowski/blob/master/uNext/Core.cpp

#include "Core.h"

const std::string GAME_TITLE = "Arcanoid 2000";

Core::Core() {
    this->quitGame = false;
    this->mouseX = 0;
    this->mouseY = 0;

    this->iFPS = 0;
    this->iNumOfFPS = 0;
    this->lFPSTime = 0;

    SDL_Init(SDL_INIT_VIDEO | SDL_INIT_TIMER | SDL_INIT_AUDIO);

    window = SDL_CreateWindow(
            GAME_TITLE.data(),
            SDL_WINDOWPOS_CENTERED,
            SDL_WINDOWPOS_CENTERED,
            800,
            800,
            SDL_WINDOW_SHOWN
    );

    if(window == NULL)
        quitGame = true;

    this->rR = SDL_CreateRenderer(window, -1, SDL_RENDERER_ACCELERATED);
    this->mainEvent = new SDL_Event();
}

Core::~Core() {
    delete mainEvent;
    SDL_DestroyRenderer(rR);
    SDL_DestroyWindow(window);
}

void Core::mainLoop() {
    lFPSTime = SDL_GetTicks();

    while(!quitGame && mainEvent->type != SDL_QUIT) {
        frameTime = SDL_GetTicks();
        SDL_PollEvent(mainEvent);
        SDL_RenderClear(rR);

        SDL_RenderFillRect(rR, NULL);

        Update();
        Draw();

        SDL_SetWindowTitle(this->window, (GAME_TITLE + " | fps: " + std::to_string(iNumOfFPS)).data());
        if(SDL_GetTicks() - 1000 >= lFPSTime) {
            lFPSTime = SDL_GetTicks();
            iNumOfFPS = iFPS;
            iFPS = 0;
        }
        ++iFPS;

        SDL_RenderPresent(rR);

        if(SDL_GetTicks() - frameTime < MIN_FRAME_TIME) {
            SDL_Delay(MIN_FRAME_TIME - (SDL_GetTicks () - frameTime));
        }
    }
}

void Core::Update() {
    Global::getSM()->Update();
}

void Core::Draw() {
    Global::getSM()->Draw(rR);
}
