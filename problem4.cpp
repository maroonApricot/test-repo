#include <iostream>
#include "problem4.h"

//ImaginaryNum definitions
ImaginaryNum::ImaginaryNum(): _real(0.0), _imaginary(0.0){}
ImaginaryNum::ImaginaryNum(double real, double imaginary): _real(real), _imaginary(imaginary){}

void ImaginaryNum::Print(){
    std::cout << _real << "+" << _imaginary << "i";
}
double ImaginaryNum::GetReal(){
    return _real;
}
double ImaginaryNum::GetImaginary(){
    return _imaginary;
}
void ImaginaryNum::SetReal(double real){
    _real = real;
}
void ImaginaryNum::SetImaginary(double imaginary){
    _imaginary = imaginary;
}
//ImaginaryCalculator definitions
ImaginaryCalculator::ImaginaryCalculator(){};

ImaginaryNum ImaginaryCalculator::Add(ImaginaryNum num1, ImaginaryNum num2){
     ImaginaryNum added((num1.GetReal()+num2.GetReal()), (num1.GetImaginary()+num2.GetImaginary()));
     return added;
}

ImaginaryNum ImaginaryCalculator::Multiply(double multiplier, ImaginaryNum num1){
    ImaginaryNum multiplied((num1.GetReal()*multiplier), (num1.GetImaginary()*multiplier));
    return multiplied;
}

//Main
int main(){
    ImaginaryNum n1(5.0, 3.0);
    ImaginaryNum n2(3.0, 2.0);

    ImaginaryCalculator calc;
    ImaginaryNum addednums = calc.Add (n1, n2);
    addednums.Print();

    ImaginaryNum multipliednum = calc.Multiply(5.0, n1);
    multipliednum.Print();

}