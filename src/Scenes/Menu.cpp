//
// Created by Кирилл on 09.04.2020.
//

#include "Menu.h"
#include "iostream"
#include "../helpers/DrawRect.h"
#include "../helpers/DrawText.h"

Menu::Menu() {
    if (TTF_Init() < 0) std::cerr << "Problem initializing SDL_ttf" << std::endl;

    this->font = TTF_OpenFont("Pixeboy-z8XGD.ttf", 70);
    if (!this->font) std::cerr << "Could not load font " << TTF_GetError() << std::endl;
}

Menu::~Menu() {
    if (!this->font) TTF_CloseFont(this->font);

    TTF_Quit();
    SDL_Quit();

    delete this->font;
}

void Menu::Update(double delta) {

}

void Menu::Draw(SDL_Renderer *rR) {
    // todo: получение размеров окна
    // рисуем просто лого для игры
    DrawText::Simple(rR, this->font, "Arkanoid", 800 / 2 - 300, 600 / 2 - 150, 600, 150);
    DrawText::Simple(rR, this->font, "by deissh", 800 / 2 + 150, 600 / 2, 150, 25);

    // === Buttons ===
    DrawRect::Simple(rR, 800 / 2 - 350/2, 600 / 2 + 300, 350, 50);
    DrawText::Simple(rR, this->font, "Start", 800 / 2 - 350/2, 600 / 2 + 300, 350, 50);
}
