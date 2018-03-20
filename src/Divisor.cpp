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

long long Divisor::simplifiedMethod(int divisor, int dividend)
{
    return divisor-1 > dividend ? divisor*simplifiedMethod(divisor-1, dividend) : divisor;
}

void Divisor::startCounter()
{
    LARGE_INTEGER li;
    if(!QueryPerformanceFrequency(&li))
    cout << "QueryPerformanceFrequency failed!\n";

    PCFreq = double(li.QuadPart)/1000.0;

    QueryPerformanceCounter(&li);
    CounterStart = li.QuadPart;
}

double Divisor::getCounter()
{
    LARGE_INTEGER li;
    QueryPerformanceCounter(&li);
    return double(li.QuadPart-CounterStart)/PCFreq;
}

int Divisor::getDivisor()
{
    return this->divisor;
}

int Divisor::getDividend()
{
    return this->dividend;
}

