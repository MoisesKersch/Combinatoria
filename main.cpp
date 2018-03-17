#include <iostream>
#include <Permutation.h>
#include <Repetition.h>
#include <Anagram.h>
#include "Divisor.h"

using namespace std;

int main()
{
    Divisor a;
    a.setValues(5,4);

    cout << a.getClassicMethod();
}
