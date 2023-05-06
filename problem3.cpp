#include <iostream>
#include "problem3.h"

Robot::Robot():_x(0.0), _y(0.0), _enabled(false){}

void Robot::Move(double changeInX, double changeInY){
    if (! _enabled){
        std::cout << "turn the robot on!\n";
    } else {
        _x = _x + changeInX;
        _y = _y + changeInY;
    }
}

void Robot::Enable(){
    _enabled = true;
}

void Robot::Disable(){
    _enabled = false;
}


int main(){
    Robot myRobot;
    myRobot.Move(3, 4);
    myRobot.Enable();
    myRobot.Move(3, 4);
    myRobot.Move(2, 2);
    std::cout << "(" << myRobot._x << ", " << myRobot._y << ")";
}