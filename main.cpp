#include <iostream>
#include <SFML/Graphics.hpp>
#include <SFML/Window.hpp>
#include "BartopGame.hpp"

int main(int, char**) {
    std::cout << "Hello, cmake world!\n" ;
    
    BartopGame game(false);
    game.start();

  

    return 0;
}
