#ifndef PERMUTATION_H
#define PERMUTATION_H

#include <iostream>

using namespace std;

class Permutation
{
    int permutation;
    int arranjo;
public:
    void setPermutation(int);
    void setArranjo(int elementos, int agrupamento);
    int getPermutation();
    int getArranjo();
    long long getFactorial(int);
};

#endif // PERMUTATION_H
