#pragma once
#include <SFML/Graphics.hpp>
#include "polygon.hpp"
#include "rectangle.hpp"
#include <vector>

class Square : public Polygon {
public:
    Square(float x, float y, float size, const sf::Color& fillColor=sf::Color::Green)
        : Polygon(getSquarePoints(x, y, size), fillColor) {}

private:
    static std::vector<sf::Vector2f> getSquarePoints(float x, float y, float size);
};