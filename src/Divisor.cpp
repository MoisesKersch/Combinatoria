#include "Divisor.h"


void Divisor::setValues(int divisor, int  dividend)
{
    this->divisor = divisor;
    this->dividend = dividend;
}

long long Divisor::getClassicMethod()
{
    return getFactorial(divisor)/getFactorial(dividend);
}
