//
// Created by Кирилл on 04.04.2020.
//

#include "Global.h"

Global::Global() { }
Global::~Global() {
    delete oSM;
}

// init managers
SceneManager* Global::oSM = new SceneManager();

SceneManager *Global::getSM() {
    return oSM;
}
