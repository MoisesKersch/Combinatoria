#include "Repetition.h"

Repetition::Repetition(int permutation)
{
    setPermutation(permutation);
}

bool Repetition::setRepetitions(string repetition)
{
    this->repetition = repetition;
    stringstream stream(repetition);
    int tempt;

    while (stream >> tempt)
    {
        if (stream.peek() == ',')
            stream.ignore();

        if (tempt >= getPermutation())
            return false;
        input.push_back(tempt);
    }
    return true;
}

long long Repetition::getRepetition()
{
    long long tempt = 1;

    for (unsigned int x=0; x<this->input.size(); x++)
    {
        tempt *= getFactorial(input.at(x));
    }
    return (getFactorial(getPermutation()) / tempt);
}

void Repetition::print()
{
    for (unsigned int x=0; x<input.size(); x++)
        cout << input.at(x) << endl;
}


