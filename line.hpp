#pragma once
#pragma once
#include "shape.hpp"

class Line : public Shape {
public:
    Line(float x1, float y1, float x2, float y2, float thickness, const sf::Color& color=sf::Color::Green)
        : point1(x1, y1), point2(x2, y2), thickness(thickness), lineColor(color) {}

    void draw(sf::RenderWindow& window) override;
private:
    sf::Vector2f point1;
    sf::Vector2f point2;
    float thickness;
    sf::Color lineColor;
};
