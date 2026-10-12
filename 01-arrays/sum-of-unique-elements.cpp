// Problem : Sum of Distinct in Array
// Platform : GeeksforGeeks
// Problem Link : https://www.geeksforgeeks.org/problems/sum-of-distinct-elements4801/1
// Time Complexity : O(N²)
// Space Complexity : O(1)
// Approach : find unique elements using nested loop then add to find sum

#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;

class Solution {
public:
    int findSum(vector<int>& arr) {
        int n = arr.size();
        int sum = 0;
    
        for(int i = 0; i < n; i++) {
            int count = 0;
            // Check karo ki yeh element poore array mein kitni baar aaya hai
            for(int j = 0; j < n; j++) {
                if(arr[i] == arr[j])
                count++;
            }
        
            // Agar element sirf ek hi baar aaya hai (strictly unique), tabhi sum mein add karo
            if(count == 1)
            sum += arr[i];
        }

        return sum;
    }
};