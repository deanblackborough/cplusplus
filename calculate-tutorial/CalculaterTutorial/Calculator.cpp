#include "Calculator.h"

double Calculator::Calculate(double x, char oper, double y)
{
    switch (oper) 
    {
        case '+':
            return x + y;
        case '-':
            return x - y;
        case '*':
            return x * y;
        case '/':
            return x / y;
        case '%':
            return static_cast<float>(static_cast<int>(x) % static_cast<int>(y));
        default:
            return 0.0;
    }
}
