#pragma once
#include "polygon.hpp"

class Rectangle : public Polygon {
public:
    Rectangle(float x, float y, float width, float height, const sf::Color& fillColor)
        : Polygon(getRectanglePoints(x, y, width, height), fillColor) {}

private:
    static std::vector<sf::Vector2f> getRectanglePoints(float x, float y, float width, float height);
};