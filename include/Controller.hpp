// Controller.hpp
#ifndef _CONTROLLER_HPP_
#define _CONTROLLER_HPP_

enum buttons{
    SELECT, START, TOPL, TOPM, TOPR, BOTL, BOTM, BOTR
};

class Controller
{
public:
    Controller(int id=-1);
    bool isButtonPressed(int button);
private:
    int id;
};
#endif