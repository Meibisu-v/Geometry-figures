#include "circle.hpp"

void Circle::draw(sf::RenderWindow& window) {
    sf::CircleShape circle(radius);
    circle.setPosition(position.x - radius, position.y - radius);
    circle.setFillColor(fillColor);
    window.draw(circle);
}