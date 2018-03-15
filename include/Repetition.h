#ifndef REPETITION_H
#define REPETITION_H

#include <Permutation.h>
#include <vector>
#include <sstream>

class Repetition : public Permutation
{
    string repetition;
    vector <int> input;
public:
    Repetition(int);

    bool setRepetitions(string);
    long long getRepetition();

    void print();
};

#endif // REPETITION_H
