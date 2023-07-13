#include "square.hpp"
#include <vector>

std::vector<sf::Vector2f> Square::getSquarePoints(float x, float y, float size) {
    return {
        sf::Vector2f(x - size / 2, y - size / 2),
        sf::Vector2f(x + size / 2, y - size / 2),
        sf::Vector2f(x + size / 2, y + size / 2),
        sf::Vector2f(x - size / 2, y + size / 2)
    };
}