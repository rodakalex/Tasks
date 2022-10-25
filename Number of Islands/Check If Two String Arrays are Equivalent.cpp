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

int main()
{

	vector<string> test1Word1 = { "ab", "c" };
	vector<string> test1Word2 = { "a", "bc" };
	vector<string> test2Word1 = { "a", "cb" };
	vector<string> test2Word2 = { "ab", "c" };
	vector<string> test3Word1 = { "abc", "d", "defg" };
	vector<string> test3Word2 = { "abcddefg" };

	cout << arrayStringsAreEqual(test1Word1, test1Word2) << endl;
	cout << arrayStringsAreEqual(test2Word1, test2Word2) << endl;
	cout << arrayStringsAreEqual(test3Word1, test3Word2) << endl;

}