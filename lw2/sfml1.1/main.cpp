#include <SFML/Graphics.hpp>
#include <SFML/System.hpp>
#include <SFML/Window.hpp>

int main()
{
    sf::RenderWindow window(sf::VideoMode({200, 550}), "Traffic light");

    window.clear();

    sf::RectangleShape shape1;
    shape1.setSize({170, 520});
    shape1.setPosition({15, 15});
    shape1.setFillColor(sf::Color(70, 70, 70));
    window.draw(shape1);

    sf::CircleShape shape2(75);
    shape2.setPosition({25, 30});
    shape2.setFillColor(sf::Color(0, 255, 0));
    window.draw(shape2);

    sf::CircleShape shape3(75);
    shape3.setPosition({25, 200});
    shape3.setFillColor(sf::Color(255, 255, 0));
    window.draw(shape3);

    sf::CircleShape shape4(75);
    shape4.setPosition({25, 370});
    shape4.setFillColor(sf::Color(255, 0, 0));
    window.draw(shape4);

    window.display();

    sf::sleep(sf::seconds(10));
}