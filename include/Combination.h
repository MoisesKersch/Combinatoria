#ifndef COMBINATION_H
#define COMBINATION_H

#include <iostream>
#include <Permutation.h>

class Combination : public Permutation
{
    int combination;
public:
    void setCombination(int elementos, int agrupamento);
    int getCombination();
};

#endif // COMBINATION_H

