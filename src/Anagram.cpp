#include "Anagram.h"

Anagram::Anagram(string word) : Permutation(word.size())
{
	int repetitions = 1;
    transform(word.begin(), word.end(),word.begin(), ::toupper);

	for (int x=0; x<word.size();x++)
	{
		for (int y = x+1; y < word.size(); y++)
		{
			if (word.at(x) == word.at(y))
			{
				word.erase(word.begin()+y);
				repetitions++;
			}
		}
		if (repetitions > 1)
        {
            storep.push_back(repetitions);
            repetitions = 1;
        }
	}
}

long long Anagram::getResult()
{
    long long tempt = 1;

    for (unsigned int x=0; x<this->storep.size(); x++)
    {
        tempt *= getFactorial(storep.at(x));
    }
    return (getFactorial(getPermutation()) / tempt);
}
