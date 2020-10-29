#include "BartopGame.hpp"
#include <iostream>
#include "Controller.hpp"

BartopGame::BartopGame(bool bothScreens)
{
    Controller c = Controller(1);
    height = MONITOR_HEIGHT;
    if(bothScreens)
    {
        width = DUAL_MONITOR_WIDTH;
    }
    else
    {
        width = SINGLE_MONITOR_WIDTH;
    }
    this->p_window = std::make_unique<sf::RenderWindow>(sf::VideoMode(width, height), "SFML works!");
    std::cout << width << std::endl;
    p_window->setFramerateLimit(60);
}

//called 60 times per second
void BartopGame::update()
{
    if(c1.isButtonPressed(1))
        std::cout << "blaa" << std::endl;
}

void BartopGame::start()
{
  
    sf::RenderWindow& window = *p_window;

    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();
        }

        update();
        window.clear();
        //draw scene here

        window.display();
        //waiting...
    }
}