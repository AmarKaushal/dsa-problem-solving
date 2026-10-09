// Problem : Missing in Array (Sum Approach)
// Platform : GeeksforGeeks
// Problem Link : https://www.geeksforgeeks.org/problems/missing-number-in-array1416/1
// Time Complexity : O(N)
// Space Complexity : O(1)
// Approach : Sum of first N natural numbers minus array sum. Uses 'long long' to prevent integer overflow.

#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int missingNum(vector<int>& arr) {
        long long n = arr.size() + 1;
        int xorValue = 0;
        
        // xor with array elements
        for (int num : arr) 
        {
            xorValue ^= num;
        }
        
        // xor with 1 to n numbers
        for(int i=1;i<=n;i++)
        {
            xorValue ^= i;
        }
        return xorValue;
    }
};