//
// Created by Кирилл on 04.04.2020.
//

#ifndef CPPGAME_GLOBAL_H
#define CPPGAME_GLOBAL_H

#include "SceneManager.h"

class Global {
private:
    static SceneManager* oSM;

public:
    Global();
    ~Global();

    static int GAME_WIDTH, GAME_HEIGHT;

    static SceneManager* getSM();
};


#endif //CPPGAME_GLOBAL_H
