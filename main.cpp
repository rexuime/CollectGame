#include "Game.hpp"
#include <SFML/Graphics.hpp>

int main(){

    //Game game;
    //game.RunGame();
    sf::RenderWindow window(sf::VideoMode({800, 600}), "SFML window");
    while (window.isOpen())
    {
        // Process events
        while (const std::optional event = window.pollEvent())
        {
            // Close window: exit
            if (event->is<sf::Event::Closed>())
                window.close();
        }
    }
    return 0;
    
}