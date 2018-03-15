#include "Permutation.h"

Permutation::Permutation(int permutation)
{
    this->permutation = permutation;
}

long long Permutation::getFactorial(int input)
{
    return (long long) (input > 1) ? (input * getFactorial(input - 1)) : 1;
}

int Permutation::getPermutation()
{
    return this->permutation;
}
