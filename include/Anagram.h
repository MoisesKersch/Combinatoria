#ifndef ANAGRAM_H
#define ANAGRAM_H

#include <vector>
#include <iostream>
#include <algorithm>
#include <Permutation.h>

using namespace std;

class Anagram : Permutation
{
    vector <int> storep;
public:
    Anagram(string);
    long long getResult();
};

#endif // ANAGRAM_H
