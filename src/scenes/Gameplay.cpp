//
// Created by Кирилл on 09.04.2020.
//

#include <iostream>
#include "Gameplay.h"
#include "string"
#include "../helpers/Draw.h"

Gameplay::Gameplay() {
    if (TTF_Init() < 0) std::cerr << "Could not initialize SDL_ttf" << std::endl;

    this->font = TTF_OpenFont("Pixeboy-z8XGD.ttf", 70);
    if (!this->font) std::cerr << "Could not load font " << TTF_GetError() << std::endl;
}

Gameplay::~Gameplay() {
    if (!this->font) TTF_CloseFont(this->font);

    TTF_Quit();
    SDL_Quit();
}

void Gameplay::Update(double delta) {
}

void Gameplay::Draw(SDL_Renderer *rR) {
    Draw::Text(rR, this->font, "Scores: " + std::to_string(this->state.getScore()),
            5, 5,
            100, 25);

    Draw::Rect(rR,
            5, 35,
            800 - 10, 800 - 10);

    // platform
    Draw::Rect(rR,
                     100, 800 - 50,
                     150, 25);
}

void Gameplay::LeftMousePressedEvent(int mouseX, int mouseY) {
}

void Gameplay::MouseMove(int mouseX, int mouseY) {
}
