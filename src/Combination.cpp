#include "Combination.h"

bool Combination::setCombination(int elementos, int agrupamento)
{
    this->combination = getFactorial(elementos) / (getFactorial(agrupamento) * getFactorial(elementos - agrupamento));
}

int Combination::getCombination()
{
    return this->combination;
}

