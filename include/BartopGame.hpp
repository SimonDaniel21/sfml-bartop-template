
// BartopGame.hpp
#ifndef _BARTOP_GAME_HPP_
#define _BARTOP_GAME_HPP_

#include <memory>
#include "SFML/Graphics.hpp"
#include "Controller.hpp"

const int SINGLE_MONITOR_WIDTH = 1680;
const int DUAL_MONITOR_WIDTH = 3360;
const int MONITOR_HEIGHT = 1050;


class BartopGame  
{
 
public:
 
    BartopGame(bool bothScreens);
    void update();
    void start();
 
private:
    Controller c1 = Controller(0);
    Controller c2 = Controller(1);
    Controller c3;
    Controller c4;
    float TIME_STEP = 1.0f / 60.0f;
    std::unique_ptr<sf::RenderWindow> p_window;
    int width, height;
};
#endif