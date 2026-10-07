// Problem : Reverse The Array
// Platform : GeeksforGeeks
// Problem Link : https://www.geeksforgeeks.org/problems/reverse-an-array/1
// Time Complexity : O(N)
// Space Complexity : O(1)
// Approach : 
// 1. Optimal: Two-pointer approach using std::swap in-place (start & end pointers).
// 2. Alternative: Traverse up to N/2 using a loop and swap using a temp variable.

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    void reverseArray(vector<int>& arr) {
        int start = 0;
        int end = arr.size() - 1;

        while (start < end) {
            swap(arr[start], arr[end]);
            start++;
            end--;
        }
    }
};

