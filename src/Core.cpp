//
// Created by Кирилл on 04.04.2020.
//

// https://github.com/jakowskidev/uMario_Jakowski/blob/master/uNext/Core.cpp

#include "Core.h"

const std::string GAME_TITLE = "Arcanoid 2000";

Core::Core() {
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
            SDL_WINDOW_SHOWN | SDL_WINDOW_OPENGL
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

    while(!Core::quitGame && mainEvent->type != SDL_QUIT) {
        frameTime = SDL_GetTicks();
        SDL_PollEvent(mainEvent);
        SDL_RenderClear(rR);

        SDL_RenderFillRect(rR, NULL);

        MouseInput();

        Update(this->getDelta());
        Draw();

        SDL_SetWindowTitle(this->window, (GAME_TITLE + " | fps: " + std::to_string(iNumOfFPS)).data());
        if(SDL_GetTicks() - 1000 >= lFPSTime) {
            lFPSTime = SDL_GetTicks();
            iNumOfFPS = iFPS;
            iFPS = 0;
        }
        ++iFPS;

        SDL_RenderPresent(rR);
    }
}

void Core::Update(double delta) {
    Global::getSM()->Update(delta);
}

void Core::Draw() {
    Global::getSM()->Draw(rR);
}

auto NOW = (double) SDL_GetPerformanceCounter();
auto LAST = 0;

double Core::getDelta() {
    LAST = NOW;
    NOW = SDL_GetPerformanceCounter();
    return (double)((NOW - LAST) * 1000 / (double)SDL_GetPerformanceFrequency());
}

void Core::MouseInput() {
    switch(mainEvent->type) {
        case SDL_MOUSEBUTTONDOWN: {
            switch (mainEvent->button.button) {
                case SDL_BUTTON_LEFT:
                    mouseLeftPressed = true;
                    break;
                case SDL_BUTTON_RIGHT:
                    mouseRightPressed = true;
                    break;
            }

            Global::getSM()->LeftMousePressedEvent(mouseX, mouseY);
            break;
        }
        case SDL_MOUSEMOTION: {
            SDL_GetMouseState(&mouseX, &mouseY);
            Global::getSM()->MouseMove(mouseX, mouseY);
            break;
        }
        case SDL_MOUSEBUTTONUP: {
            switch (mainEvent->button.button) {
                case SDL_BUTTON_LEFT:
                    mouseLeftPressed = false;
                    break;
                case SDL_BUTTON_RIGHT:
                    mouseRightPressed = false;
                    break;
            }
            break;
        }
        case SDL_MOUSEWHEEL:
            if(mainEvent->wheel.timestamp > SDL_GetTicks() - 2) {
                std::cout << "weel change y:" + std::to_string(mainEvent->wheel.y) + "\n";
            }
            break;
    }
}

bool Core::quitGame = false;
void Core::Quit() {
    Core::quitGame = true;
}
