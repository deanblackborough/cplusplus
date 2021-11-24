#include <iostream>
#include "Calculator.h"

int main()
{
    double x = 0.0;
    double y = 0.0;
    double result = 0.0;
    char oper = '+';

    std::cout << "Calculator tutorial" << std::endl;
    std::cout << "Please enter the operation to perform. Format: a+b | a-b | a*b | a/b" << std::endl;

    Calculator calculator;
    while (true) 
    {
        std::cin >> x >> oper >> y;

        if (y == 0 && oper == '/') 
        {
            std::cout << "Oops, division by zero" << std::endl;
            continue;
        }
        else 
        {
            result = calculator.Calculate(x, oper, y);
            std::cout << "This result is " << result << std::endl;
        }
    }
    
    return 0;
}