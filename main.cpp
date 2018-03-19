#include <iostream>
#include <Permutation.h>
#include <Repetition.h>
#include <Anagram.h>
#include <Combination.h>
#include "Divisor.h"

using namespace std;

int main()
{
    Combination com;
    com.setCombination(10, 2);
    cout << com.getCombination() << endl;
}
