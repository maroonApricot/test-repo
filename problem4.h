#include <string>

class ImaginaryNum{
    public:
    ImaginaryNum();
    ImaginaryNum(double real, double imaginary);

    void Print();
    double GetReal();
    double GetImaginary();
    void SetReal(double real);
    void SetImaginary(double imaginary);


    private:
    double _real;
    double _imaginary;
};
class ImaginaryCalculator{
    public:
    ImaginaryCalculator();
    ImaginaryNum Add(ImaginaryNum num1, ImaginaryNum num2);
    ImaginaryNum Multiply(double multiplier, ImaginaryNum num1);

    private:
};