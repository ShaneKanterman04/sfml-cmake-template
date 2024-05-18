//
// Created by shane on 5/17/2024.
//

#ifndef OBSTACLE_H
#define OBSTACLE_H

#include <SFML/Graphics.hpp>

using namespace sf;

class Obstacle {
private:
    Vector2f pos;
    float vel;

    RectangleShape rec;

public:
    Obstacle();
    Obstacle(float vel);

    RectangleShape getShape();
};



#endif //OBSTACLE_H
