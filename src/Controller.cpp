#include "Controller.hpp"
#include "SFML/Graphics.hpp"



Controller::Controller(int id) : id(id)
{

}

bool Controller::isButtonPressed(int button)
{
    if(id == -1)
            return false;

    #ifdef DEBUG

        if(button == buttons::TOPL)
        {
            return sf::Keyboard::isKeyPressed(sf::Keyboard::Q);
        }
        if(button == buttons::TOPM)
        {
            return sf::Keyboard::isKeyPressed(sf::Keyboard::W);
        }
        if(button == buttons::TOPR)
        {
            return sf::Keyboard::isKeyPressed(sf::Keyboard::E);
        }
        if(button == buttons::BOTL)
        {
            return sf::Keyboard::isKeyPressed(sf::Keyboard::A);
        }
        if(button == buttons::BOTM)
        {
            return sf::Keyboard::isKeyPressed(sf::Keyboard::A);
        }
        if(button == buttons::TOPR)
        {
            return sf::Keyboard::isKeyPressed(sf::Keyboard::A);
        }
        if(button == buttons::SELECT)
        {
            return sf::Keyboard::isKeyPressed(sf::Keyboard::Y);
        }
        if(button == buttons::START)
        {
            return sf::Keyboard::isKeyPressed(sf::Keyboard::X);
        }
        return false;
    #endif

    return false;
}