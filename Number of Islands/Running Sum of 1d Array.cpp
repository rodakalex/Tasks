#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void print(int i)
{
	cout << i << " ";
}

vector<int> runningSum(vector<int>& nums)
{
	vector<int> result(nums.size());
	result.push_back(nums[0]);
	for (unsigned short i = 1; i < nums.size(); ++i)
	{
		result.push_back(result[i - 1] + nums[i]);
	}
	return result;
}

//int main()
//{
//	vector<int> test1 = { 1,2,3,4 };
//	vector<int> test2 = { 1,1,1,1,1 };
//	vector<int> test3 = { 3,1,2,10,1 };
//
//	vector<int> answer1 = runningSum(test1);
//	vector<int> answer2 = runningSum(test2);
//	vector<int> answer3 = runningSum(test3);
//
//	for_each(answer1.begin(), answer1.end(), print);
//	for_each(answer2.begin(), answer2.end(), print);
//	for_each(answer3.begin(), answer3.end(), print);
//}