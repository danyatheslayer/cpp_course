#include <SFML/Graphics.hpp>
#include <SFML/Window.hpp>
#include <iostream>

int main()
{
    constexpr unsigned WINDOW_WIDTH = 800;
    constexpr unsigned WINDOW_HEIGHT = 600;

    sf::RenderWindow window(sf::VideoMode({WINDOW_WIDTH, WINDOW_HEIGHT}), "Kot");

    sf::Texture texture;
    texture.loadFromFile("cat.png");

    sf::Sprite sprite;
    sprite.setTexture(texture);
    sprite.setPosition(400, 300);

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
        window.clear(sf::Color(0xFF, 0xFF, 0xFF));
        window.draw(sprite);
        window.display();
    }
}