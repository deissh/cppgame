//
// Created by Кирилл on 09.04.2020.
//

#include "Menu.h"
#include "iostream"
#include "../helpers/Draw.h"
#include "../Core.h"

Menu::Menu() {
    if (TTF_Init() < 0) std::cerr << "Could not initialize SDL_ttf" << std::endl;

    this->font = TTF_OpenFont("Pixeboy-z8XGD.ttf", 70);
    if (!this->font) std::cerr << "Could not load font " << TTF_GetError() << std::endl;

    // Start button
    startBtnRct.x = 800 / 2 - 350/2;
    startBtnRct.y = 600 / 2 + 300;
    startBtnRct.w = 350;
    startBtnRct.h = 50;
    // Exit button
    exitBtnRct.x = 800 / 2 - 350/2;
    exitBtnRct.y = 600 / 2 + 360;
    exitBtnRct.w = 350;
    exitBtnRct.h = 50;
}

Menu::~Menu() {
    if (!this->font) TTF_CloseFont(this->font);

    TTF_Quit();
    SDL_Quit();
}

void Menu::Update(double delta) {

}

void Menu::Draw(SDL_Renderer *rR) {
    // todo: получение размеров окна
    // рисуем просто лого для игры
    Draw::Text(rR, this->font, "Arkanoid", 800 / 2 - 300, 600 / 2 - 150, 600, 150);
    Draw::Text(rR, this->font, "9000", 800 / 2 + 150, 600 / 2, 150, 20);

    // === Buttons ===
    Draw::Rect(rR,
            this->startBtnRct.x, this->startBtnRct.y,
            this->startBtnRct.w, this->startBtnRct.h);
    Draw::Text(rR, this->font, "Start",
            this->startBtnRct.x, this->startBtnRct.y,
            this->startBtnRct.w, this->startBtnRct.h);

    Draw::Rect(rR,
            this->exitBtnRct.x, this->exitBtnRct.y,
            this->exitBtnRct.w, this->exitBtnRct.h);
    Draw::Text(rR, this->font, "Exit",
            this->exitBtnRct.x + 50, this->exitBtnRct.y,
            this->exitBtnRct.w - 100, this->exitBtnRct.h);
}

int in_rect(int x, int y, struct SDL_Rect *r) {
    return (x >= r->x) && (y >= r->y) &&
           (x < r->x + r->w) && (y < r->y + r->h);
}

void Menu::LeftMousePressedEvent(int mouseX, int mouseY) {
    if (in_rect(mouseX, mouseY, &this->startBtnRct))
        Global::getSM()->scene = Global::getSM()->sGame;

    if (in_rect(mouseX, mouseY, &this->exitBtnRct))
        return Core::Quit();
}

void Menu::MouseMove(int mouseX, int mouseY) {

}
