#include <map>
#include <vector>
#include <iostream>

using namespace std;

bool checkSubarraySum(vector<int>& nums, int k)
{
	
	map<int, int> mapNums;
	mapNums[0] = -1;
	int sum = 0;

	for (int i = 0; i < nums.size(); ++i)
	{
		sum += nums[i];
		if (k != 0)
		{
			sum %= k;
		}
		if (mapNums.count(sum))
		{
			if (i - mapNums[sum] > 1)
			{
				return true;
			}
		}
		else
		{
			mapNums[sum] = i;
		}
	}
	return false;

}

int main()
{

	vector<int> test1 = { 23,2,4,6,7 };
	vector<int> test2 = { 23,2,6,4,7 };
	vector<int> test3 = { 23,2,6,4,7 };
	cout << checkSubarraySum(test1, 6) << endl;
	cout << checkSubarraySum(test2, 6) << endl;
	cout << checkSubarraySum(test3, 13) << endl;

}
