#pragma once
#include "shape.hpp"

class Trapezoid : public Shape {
public:
    Trapezoid(float x, float y, float base1, float base2, float height, const sf::Color& fillColor) {
        trapezoid.setPointCount(4);
        trapezoid.setPoint(0, sf::Vector2f(x, y));
        trapezoid.setPoint(1, sf::Vector2f(x + base1, y));
        trapezoid.setPoint(2, sf::Vector2f(x + base2, y + height));
        trapezoid.setPoint(3, sf::Vector2f(x, y + height));
        trapezoid.setFillColor(fillColor);
    }

    void draw(sf::RenderWindow& window) override {
        window.draw(trapezoid);
    }

private:
    sf::ConvexShape trapezoid;
};
