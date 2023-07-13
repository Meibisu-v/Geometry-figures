#include "line.hpp"

void Line::draw(sf::RenderWindow& window) {
    sf::Vertex line[] = {
        sf::Vertex(point1, lineColor),
        sf::Vertex(point2, lineColor)
    };
    line[0].color = lineColor;
    line[1].color = lineColor;
    line[0].position = point1;
    line[1].position = point2;
    line[0].color = lineColor;
    line[1].color = lineColor;
    window.draw(line, 2, sf::Lines);
}