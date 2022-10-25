#include <map>
#include <vector>
#include <string>
#include <iostream>

using namespace std;

//class Solution :
//    def maxLength(self, arr: List[str]) -> int :
//    charSet = set()
//
//    def overlap(charSet, s) :
//    c = Counter(charSet) + Counter(s)
//    return max(c.values()) > 1
//    # prev = set()
//    # for c in s :
//#     if c in charSet or c in prev:
//#         return True
//#     prev.add(c)
//# return False
//
//def backtrack(i) :
//    if i == len(arr) :
//        return len(charSet)
//        res = 0
//        if not overlap(charSet, arr[i]) :
//            for c in arr[i] :
//                charSet.add(c)
//                res = backtrack(i + 1)
//                for c in arr[i] :
//                    charSet.remove(c)
//                    return max(res, backtrack(i + 1)) # dont concatenate arr[i]
//
//                    return backtrack(0)

bool overlap() {
	
	return 0;

}

int maxLength(vector<string>& arr)
{
	return 0;
}


//int main()
//{
//	
//	vector<string> test1 = { "un", "iq", "ue" };			// 4
//	vector<string> test2 = { "cha", "r", "act", "ers" };	// 6
//	vector<string> test3 = { "abcdefghijklmnopqrstuvwxyz" };// 26
//	cout << maxLength(test1) << endl;
//	cout << maxLength(test2) << endl;
//	cout << maxLength(test3) << endl;
//
//}