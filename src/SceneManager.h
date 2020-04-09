//
// Created by Кирилл on 04.04.2020.
//

#ifndef CPPGAME_SCENEMANAGER_H
#define CPPGAME_SCENEMANAGER_H

#include "SDL.h"
#include "Scenes/Menu.h"

class SceneManager {
private:
    Menu * menuScene;

public:
    SceneManager();
    ~SceneManager();

    enum gameState {
        sMainMenu,
        sGameLoading,
        sGame,
        sLevelEditor,
    };

    gameState currentGameState;

    void Update(double delta);
    void Draw(SDL_Renderer* rR);

    void setBackgroundColor(SDL_Renderer* rR);
};


#endif //CPPGAME_SCENEMANAGER_H
