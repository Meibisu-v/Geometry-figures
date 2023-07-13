#pragma once
#include <SFML/Graphics.hpp>
#include "shape.hpp"

class Polygon : public Shape {
public:
    Polygon(const std::vector<sf::Vector2f>& points, const sf::Color& fillColor=sf::Color::Green)
        : points(points), fillColor(fillColor) {}

    void draw(sf::RenderWindow& window) override;

private:
    std::vector<sf::Vector2f> points;
    sf::Color fillColor;
};