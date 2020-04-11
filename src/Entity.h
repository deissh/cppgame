//
// Created by Кирилл on 11.04.2020.
//

#ifndef CPPGAME_ENTITY_H
#define CPPGAME_ENTITY_H

#include "helpers/vec2.h"

class Entity {
public:
    vec2<int> position;
    vec2<int> velocity;

    bool collisionWith(Entity entity);
};


#endif //CPPGAME_ENTITY_H
