#pragma once
#include "shape.hpp"

class Ellipse : public Shape {
public:
    Ellipse(float x, float y, float radiusX, float radiusY, const sf::Color& fillColor=sf::Color::Green)
        : position(x, y), radiusX(radiusX), radiusY(radiusY), fillColor(fillColor) {}

    void draw(sf::RenderWindow& window) override {
        sf::CircleShape ellipse;
        ellipse.setRadius(radiusX);
        ellipse.setScale(1.0f, radiusY / radiusX);
        ellipse.setPosition(position.x - radiusX, position.y - radiusY);
        ellipse.setFillColor(fillColor);
        window.draw(ellipse);
    }

private:
    sf::Vector2f position;
    float radiusX;
    float radiusY;
    sf::Color fillColor;
};