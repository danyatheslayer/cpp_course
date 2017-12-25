#include <SFML/Graphics.hpp>
#include <SFML/System.hpp>
#include <SFML/Window.hpp>

int main()
{
    sf::RenderWindow window(sf::VideoMode({600, 400}), "Rectangles and circle");

    window.clear();

    sf::RectangleShape shape1;
    shape1.setSize({150, 20});
    shape1.setRotation(90);
    shape1.setPosition({137, 105});
    shape1.setFillColor(sf::Color(0xFF, 0xFF, 0xFF));
    window.draw(shape1);

    sf::RectangleShape shape2;
    shape2.setSize({80, 20});
    shape2.setRotation(320);
    shape2.setPosition({140, 160});
    shape2.setFillColor(sf::Color(0xFF, 0xFF, 0xFF));
    window.draw(shape2);

    sf::RectangleShape shape3;
    shape3.setSize({100, 20});
    shape3.setRotation(40);
    shape3.setPosition({140, 160});
    shape3.setFillColor(sf::Color(0xFF, 0xFF, 0xFF));
    window.draw(shape3);

    sf::RectangleShape shape4;
    shape4.setSize({172, 20});
    shape4.setRotation(90);
    shape4.setPosition({260, 100});
    shape4.setFillColor(sf::Color(0x0, 0x0, 0xFF));
    window.draw(shape4);

    sf::RectangleShape shape5;
    shape5.setSize({99.5, 20});
    shape5.setRotation(25);
    shape5.setPosition({260, 100});
    shape5.setFillColor(sf::Color(0x0, 0x0, 0xFF));
    window.draw(shape5);

    sf::RectangleShape shape6;
    shape6.setSize({100, 20});
    shape6.setRotation(-25);
    shape6.setPosition({248, 254});
    shape6.setFillColor(sf::Color(0x0, 0x0, 0xFF));
    window.draw(shape6);

    sf::RectangleShape shape7;
    shape7.setSize({88, 20});
    shape7.setRotation(90);
    shape7.setPosition({350, 141.25});
    shape7.setFillColor(sf::Color(0x0, 0x0, 0xFF));
    window.draw(shape7);

    sf::RectangleShape shape8;
    shape8.setSize({170, 20});
    shape8.setRotation(-75);
    shape8.setPosition({370, 265});
    shape8.setFillColor(sf::Color(0xFF, 0x0, 0x0));
    window.draw(shape8);

    sf::RectangleShape shape9;
    shape9.setSize({170, 20});
    shape9.setRotation(70);
    shape9.setPosition({435, 100});
    shape9.setFillColor(sf::Color(0xFF, 0x0, 0x0));
    window.draw(shape9);

    sf::RectangleShape shape10;
    shape10.setSize({60, 15});
    shape10.setRotation(180);
    shape10.setPosition({460, 210});
    shape10.setFillColor(sf::Color(0xFF, 0x0, 0x0));
    window.draw(shape10);

    window.display();
    sf::sleep(sf::seconds(5));
}