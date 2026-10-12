// Problem : Sum of Distinct in Array
// Platform : GeeksforGeeks
// Problem Link : https://www.geeksforgeeks.org/problems/sum-of-distinct-elements4801/1
// Time Complexity : O(N)
// Space Complexity : O(N)
// Approach 1 : Brute force using nested loops (O(N^2) time, O(1) space)
// Approach 2 : unordered set filter out all unique elements from array then iterate the set to calculate sum

#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;

class Solution {
public:
    int findSum(vector<int>& arr) {
        int n = arr.size();
        
        // Insert all elements into an unordered_set to automatically filter duplicates
        unordered_set<int> s(arr.begin(), arr.end());
        
        int sum = 0;
        // Traverse the set and accumulate each unique element
        for (int num : s) {
            sum += num;
        }
        
        return sum;
    }
};