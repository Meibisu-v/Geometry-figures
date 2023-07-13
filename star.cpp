#include "star.hpp"
#include <cmath>
#include <numbers>

void Star::draw(sf::RenderWindow& window) {
    const int numPoints = 5;
    const float angleIncrement = 2.0f * std::numbers::pi_v<float> / numPoints;
    const float innerRadius = radius / 2.5f;

    sf::ConvexShape star;
    star.setPointCount(2 * numPoints);

    for (int i = 0; i < numPoints; ++i) {
        float outerAngle = i * angleIncrement - std::numbers::pi_v<float> / 2;
        float innerAngle = (i + 0.5f) * angleIncrement - std::numbers::pi_v<float> / 2;
        float outerX = position.x + radius * std::cos(outerAngle);
        float outerY = position.y + radius * std::sin(outerAngle);
        float innerX = position.x + innerRadius * std::cos(innerAngle);
        float innerY = position.y + innerRadius * std::sin(innerAngle);

        star.setPoint(2 * i, sf::Vector2f(outerX, outerY));
        star.setPoint(2 * i + 1, sf::Vector2f(innerX, innerY));
    }

    star.setFillColor(fillColor);
    window.draw(star);
}