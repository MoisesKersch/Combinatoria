#include <iostream>
#include <Permutation.h>
#include <Repetition.h>

using namespace std;

int main()
{
    Repetition a(10);


    a.setRepetitions("3,2,2");

    cout << a.getRepetition();
}
