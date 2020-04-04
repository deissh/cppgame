//
// Created by Кирилл on 04.04.2020.
//

#ifndef CPPGAME_CORE_H
#define CPPGAME_CORE_H

#include "SDL.h"
#include "string"
#include "iostream"

#include "SceneManager.h"
#include "Global.h"

class Core {
private:
    SDL_Window* window;
    SDL_Renderer* rR;
    SDL_Event* mainEvent;

    SceneManager SceneManager;

    // fps metrics
    long frameTime = 0;
    static const int MIN_FRAME_TIME = 16;

    unsigned long lFPSTime;
    int iNumOfFPS;
    int iFPS;
public:
    Core();
    ~Core();

    bool quitGame;

    void mainLoop();
    void Update();
    void Draw();

    int mouseX, mouseY = 0;
};


#endif //CPPGAME_CORE_H
