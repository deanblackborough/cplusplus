#include <iostream>
#include "Calculator.h"

int main()
{
    double x = 0.0;
    double y = 0.0;
    double result = 0.0;
    char oper = '+';
    char quit;

    std::cout << "Calculator" << std::endl;
    std::cout << "Please enter the operation to perform. Format: [a+b | a-b | a*b | a/b | a%b]" << std::endl;
    
    Calculator calculator;
    bool calculate = true;
    while (calculate) 
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

        std::cout << "Do you want to quit? (y/n)" << std::endl;
        std::cin >> quit;
        if (quit == 'y') 
        {
            calculate = false;
        }
        else
        {
            std::cout << "Enter another calculation and I will amaze you Jack!" << std::endl;
        }
    }
    
    return 0;
}