//
// Created by shane on 5/17/2024.
//

#include "Obstacle.h"
#include <SFML/Graphics.hpp>
using namespace sf;

Obstacle::Obstacle() {
    rec.setSize(Vector2f(500.f,500.f));
    rec.setFillColor(Color::Blue);
    rec.setPosition(Vector2f(500,500));
}

Obstacle::Obstacle(float vel) {
    rec.setSize(Vector2f(500.f,500.f));
    rec.setFillColor(Color::Blue);
    rec.setPosition(Vector2f(500,500));
}

RectangleShape Obstacle::getShape() {
    return rec;
}
