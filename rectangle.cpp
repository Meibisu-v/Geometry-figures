#include <vector>
#include  "rectangle.hpp"

std::vector<sf::Vector2f> Rectangle::getRectanglePoints(float x, float y, float width, float height) {
    return {
        sf::Vector2f(x, y),
        sf::Vector2f(x + width, y),
        sf::Vector2f(x + width, y + height),
        sf::Vector2f(x, y + height)
    };
}