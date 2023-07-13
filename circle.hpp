#pragma once
#include <SFML/Graphics.hpp>
#include "shape.hpp"

class Circle : public Shape {
public:
    Circle(float x, float y, float radius, const sf::Color& fillColor=sf::Color::Green)
        : position(x, y), radius(radius), fillColor(fillColor) {}

    void draw(sf::RenderWindow& window) override;

private:
    sf::Vector2f position;
    float radius;
    sf::Color fillColor;
};