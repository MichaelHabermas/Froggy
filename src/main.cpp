#include <array>
#include <SFML/Graphics.hpp>
#include "Headers/Frog.hpp"
#include "Headers/Globals.hpp"

int main()
{
    sf::RenderWindow window(sf::VideoMode(CELL_SIZE * MAP_WIDTH * SCREEN_RES, CELL_SIZE * MAP_HEIGHT * SCREEN_RES), "Froggy", sf::Style::Close);

    hcc::Frog frog;
    sf::Event event;

    while (window.isOpen())
    {
        while (window.pollEvent(event))
        {
            switch(event.type)
            {
                case sf::Event::Closed:
                {
                    window.close();
                }
            }
        }

        frog.Update();
        window.clear();
        frog.Draw(window);
        window.display();
    }

    return 0;
}