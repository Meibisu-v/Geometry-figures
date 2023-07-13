#pragma once
#include "shape.hpp"

class Star : public Shape {
public:
    Star(float x, float y, float radius, const sf::Color& fillColor=sf::Color(255, 127, 80))
        : position(x, y), radius(radius), fillColor(fillColor) {}


    void draw(sf::RenderWindow& window) override;

private:
    sf::Vector2f position;
    float radius;
    sf::Color fillColor;
};