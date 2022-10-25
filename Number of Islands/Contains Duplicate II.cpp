#include <iostream>
#include <vector>
#include <map>

using namespace std;


bool containsNearbyDuplicate(vector<int>& nums, int k) {

    map<int, int> numsByLastIndex;
    for (int i = 0; i < nums.size(); ++i)
    {
        int num = nums[i];
        if (numsByLastIndex.find(num) != numsByLastIndex.end() && i - numsByLastIndex[num] <= k)
        {
            return true;
        }
        numsByLastIndex[num] = i;
    }
    return false;

}
