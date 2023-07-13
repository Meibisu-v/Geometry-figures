#include "polygon.hpp"

void Polygon::draw(sf::RenderWindow& window) {
    sf::ConvexShape polygon;
    polygon.setPointCount(points.size());
    for (size_t i = 0; i < points.size(); ++i) {
        polygon.setPoint(i, points[i]);
    }
    polygon.setFillColor(fillColor);
    window.draw(polygon);
}