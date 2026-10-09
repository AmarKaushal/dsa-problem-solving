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
        long long arraySum = 0;
        
        // sum of array
        for (int i = 0; i < arr.size(); i++) {
            arraySum += arr[i];
        }
        
        // sum of n natural numbers
        long long totalSum = n * (n + 1) / 2;
        return totalSum - arraySum;
    }
};