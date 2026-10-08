// Problem : Check Sorted Array
// Platform : GeeksforGeeks
// Problem Link : https://www.geeksforgeeks.org/problems/check-if-an-array-is-sorted0701/1
// Time Complexity : O(N)
// Space Complexity : O(1)
// Approach : Single pass traversal to check element i+1 should be in non-decreasing order in array.

#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    bool arraySortedOrNot(vector<int>& arr) {
        int n = arr.size();
        for (int i = 0; i < n - 1; i++) {
            if (arr[i + 1] < arr[i]) {
                return false;
            }
        }
        return true;
    }
};