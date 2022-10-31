#include <iostream>
#include <vector>
#include <algorithm>
#include <map>

using namespace std;

//void print(int i) 
//{
//	
//	std::cout << ' ' << i;
//
//}

vector<int> twoSum(vector<int>& nums, int target) 
{

	vector<int> result;
	map<int, int> m;
	for (int i = 0; i < nums.size(); i++)
	{
		if (m.find(target - nums[i]) == m.end()) {
			m[nums[i]] = i;
		}
		else {
			result.push_back(m[target - nums[i]]);
			result.push_back(i);			
		}
	}
	return result;

}

//int main()
//{
//	
//	vector<int> test1 = { 2, 7, 11, 15 };
//	vector<int> test2 = { 3, 2, 4 };
//	vector<int> test3 = { 3, 3 };
//
//	vector<int> answer1 = twoSum(test1, 9);
//	vector<int> answer2 = twoSum(test2, 6);
//	vector<int> answer3 = twoSum(test3, 6);
//
//	
//	for_each(answer1.begin(), answer1.end(), print);
//	for_each(answer2.begin(), answer2.end(), print);
//	for_each(answer3.begin(), answer3.end(), print);
//
//}