//
// Created by Кирилл on 04.04.2020.
//

#include <iostream>
#include <string>
#include "SceneManager.h"

SceneManager::SceneManager() {
    this->scene = sMainMenu;

    this->menuScene = new Menu();
    this->gameplay = new Gameplay();
}

SceneManager::~SceneManager() {
}

void SceneManager::Update(double delta) {
    switch (this->scene) {
        case sMainMenu:
            this->menuScene->Update(delta);
            break;
        case sGameLoading:
            // update loading scene
            break;
        case sGame:
            this->gameplay->Update(delta);
            break;
        case sLevelEditor:
            break;
    }
}

void SceneManager::Draw(SDL_Renderer *rR) {
    switch (this->scene) {
        case sMainMenu:
            this->menuScene->Draw(rR);
            break;
        case sGameLoading:
            // draw loading scene
            break;
        case sGame:
            this->gameplay->Draw(rR);
            break;
        case sLevelEditor:
            break;
    }
}

void SceneManager::LeftMousePressedEvent(int mouseX, int mouseY) {
    switch (this->scene) {
        case sMainMenu:
            this->menuScene->LeftMousePressedEvent(mouseX, mouseY);
            break;
        case sGameLoading:
            break;
        case sGame:
            this->gameplay->LeftMousePressedEvent(mouseX, mouseY);
            break;
        case sLevelEditor:
            break;
    }
}

void SceneManager::MouseMove(int x, int y) {
    switch (this->scene) {
        case sMainMenu:
            this->menuScene->MouseMove(x, y);
            break;
        case sGameLoading:
            break;
        case sGame:
            this->gameplay->MouseMove(x, y);
            break;
        case sLevelEditor:
            break;
    }
}
