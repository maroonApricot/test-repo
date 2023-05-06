#include <string>

class Robot 
{
    public:
    double _x;
    double _y;
    bool _enabled;

    Robot();
    void Move(double changeInX, double changeInY);
    void Enable();
    void Disable();

    private:
};