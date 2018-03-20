#include "Permutation.h"

void Permutation::setPermutation(int permutation)
{
    this->permutation = permutation;
}

void Permutation::setArranjo(int elementos, int agrupamento)
{
    this->permutation = getFactorial(elementos) / getFactorial(elementos - agrupamento);
}

long long Permutation::getFactorial(int input)
{
    return (long long) (input > 1) ? (input * getFactorial(input - 1)) : 1;
}

int Permutation::getPermutation()
{
    return this->permutation;
}

