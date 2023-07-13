#define _USE_MATH_DEFINES
#include <numbers>
#include <math.h>
#include <SFML/Graphics.hpp>
#include "shape.hpp"
#include "circle.hpp"
#include "polygon.hpp"
#include "rectangle.hpp"
#include "square.hpp"
#include "triangle.hpp"
#include "ellipse.hpp"
#include "line.hpp"
#include "star.hpp"
#include "trapezoid.hpp"

int main() {
    sf::RenderWindow window(sf::VideoMode(900, 700), "Geometry");

    Circle circle(100, 100, 50, sf::Color::Red);
    Rectangle rectangle(300, 200, 100, 200, sf::Color::Blue);
    Triangle triangle(600, 300, 100, 150, sf::Color::Green);
    Ellipse ellipse(200, 300, 80, 120, sf::Color::Yellow);
    Line line(200, 500, 600, 400, 3.0f, sf::Color::Cyan);
    Star star(500, 200, 60);
    Trapezoid trapezoid(200, 500, 150, 250, 100, sf::Color::Yellow); 
    while (window.isOpen()) {
        sf::Event event;
        while (window.pollEvent(event)) {
            if (event.type == sf::Event::Closed) {
                window.close();
            }
        }

        window.clear();
        circle.draw(window);
        rectangle.draw(window);
        triangle.draw(window);
        ellipse.draw(window);
        line.draw(window);
        star.draw(window);
        trapezoid.draw(window);
        window.display();
    }

    return 0;
}
