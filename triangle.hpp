#pragma once
#include "shape.hpp"

class Triangle : public Shape {
public:
    Triangle(float x, float y, float base, float height, const sf::Color& fillColor)
        : position(x, y), base(base), height(height), fillColor(fillColor) {
        triangle.setPointCount(3);
        triangle.setPoint(0, sf::Vector2f(x, y));
        triangle.setPoint(1, sf::Vector2f(x + base / 2, y - height));
        triangle.setPoint(2, sf::Vector2f(x + base, y));
        triangle.setFillColor(fillColor);
    }

    void draw(sf::RenderWindow& window) override {
        window.draw(triangle);
    }

private:
    sf::Vector2f position;
    float base;
    float height;
    sf::Color fillColor;
    sf::ConvexShape triangle;
};