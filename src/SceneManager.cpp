//
// Created by Кирилл on 04.04.2020.
//

#include "SceneManager.h"

SceneManager::SceneManager() {
    this->currentGameState = sMainMenu;
}

SceneManager::~SceneManager() {
}

void SceneManager::Update() {
    switch (this->currentGameState) {
        case sMainMenu:
            // update menu scene
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
            // draw menu scene
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
