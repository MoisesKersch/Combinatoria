#ifndef DIVISOR_H
#define DIVISOR_H
#include <Permutation.h>

class Divisor : Permutation
{
    int divisor;
    int dividend;
public:
    void setValues(int divisor, int  dividend);

    long long getClassicMethod();
};

#endif // DIVISOR_H
