#ifndef DIVISOR_H
#define DIVISOR_H

#include <Permutation.h>
#include <windows.h>

class Divisor : Permutation
{
    int divisor;
    int dividend;

    double PCFreq = 0.0;
    __int64 CounterStart = 0;

    void startCounter(); //< \/ these functions are responsible to get the execution time
    double getCounter();
public:
    void setValues(int divisor, int  dividend);

    int getDivisor();
    int getDividend();

    long long simplifiedMethod(int divisor, int dividend);

    long long getClassicMethod();
};


#endif // DIVISOR_H
