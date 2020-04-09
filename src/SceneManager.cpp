//
// Created by Кирилл on 04.04.2020.
//

#include "SceneManager.h"

SceneManager::SceneManager() {
    this->currentGameState = sMainMenu;

    this->menuScene = new Menu();
}

SceneManager::~SceneManager() {
}

void SceneManager::Update(double delta) {
    switch (this->currentGameState) {
        case sMainMenu:
            this->menuScene->Update(delta);
            break;
        case sGameLoading:
            // update loading scene
            break;
        case sGame:
            break;
        case sLevelEditor:
            break;
    }
}

void SceneManager::Draw(SDL_Renderer *rR) {
    switch (this->currentGameState) {
        case sMainMenu:
            this->menuScene->Draw(rR);
            break;
        case sGameLoading:
            // draw loading scene
            break;
        case sGame:
            break;
        case sLevelEditor:
            break;
    }
}

void SceneManager::setBackgroundColor(SDL_Renderer *rR) {

}
