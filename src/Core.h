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

    // fps metrics
    long frameTime = 0;

    unsigned long lFPSTime;
    int iNumOfFPS;
    int iFPS;

    void MouseInput();
public:
    Core();
    ~Core();

    static bool quitGame;
    static void Quit();

    double getDelta();

    void mainLoop();
    void Update(double delta);
    void Draw();

    bool mouseLeftPressed, mouseRightPressed = false;
    int mouseX, mouseY = 0;
};


#endif //CPPGAME_CORE_H
