#include <SFML/Graphics.hpp>
#include <SFML/Window.hpp>
#include <iostream>

void init(sf::ConvexShape &arrow)
{

    arrow.setPosition({400, 300});
    arrow.setPointCount(7);
    arrow.setPoint(0, {-45, 20});
    arrow.setPoint(1, {5, 20});
    arrow.setPoint(2, {5, 40});
    arrow.setPoint(3, {45, 0});
    arrow.setPoint(4, {5, -40});
    arrow.setPoint(5, {5, -20});
    arrow.setPoint(6, {-45, -20});
    arrow.setRotation(-80);
    arrow.setFillColor(sf::Color(0xFF, 0xFF, 0x0));

    arrow.setOutlineColor(sf::Color(0x0, 0x0, 0x0));
    arrow.setOutlineThickness(3);
}

int main()
{
    constexpr unsigned WINDOW_WIDTH = 800;
    constexpr unsigned WINDOW_HEIGHT = 600;

    sf::ContextSettings settings;
    settings.antialiasingLevel = 8;
    sf::RenderWindow window(
        sf::VideoMode({WINDOW_WIDTH, WINDOW_HEIGHT}),
        "STRELO4KA", sf::Style::Default, settings);

    sf::ConvexShape arrow;
    init(arrow);

    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
            {
                window.close();
            }
        }
        window.clear(sf::Color::White);
        window.draw(arrow);
        window.display();
    }
}