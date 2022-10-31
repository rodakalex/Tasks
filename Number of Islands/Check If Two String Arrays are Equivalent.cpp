#include <vector>
#include <string>
#include <iostream>

using namespace std;

string stringBuilder(vector<string>& word)
{
	string s;

	for (int i = 0; i < word.size(); i++)
	{
		s.append(word[i]);
	}

	return s;

}

bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2)
{
	
	string s1 = stringBuilder(word1);
	string s2 = stringBuilder(word2);

	return !s1.compare(s2);

}
