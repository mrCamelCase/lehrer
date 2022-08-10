#include <SFML/Graphics.hpp>

int main()
{
    sf::RenderWindow window(sf::VideoMode(200, 200), "Hello SFML!");
    sf::CircleShape face(100.f);
    face.setFillColor(sf::Color::Yellow);

    sf::CircleShape eye1(20.f);
    eye1.setFillColor(sf::Color::Black);

    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();
        }

        window.clear();
        window.draw(face);
        window.draw(eye1);
        window.display();
    }

    return 0;
}