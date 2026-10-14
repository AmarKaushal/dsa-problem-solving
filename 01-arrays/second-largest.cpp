// Problem : Second Largest Element in an Array
// Platform : GeeksforGeeks
// Problem Link : https://www.geeksforgeeks.org/problems/second-largest3735/1
// Time Complexity : O(N)
// Space Complexity : O(1)
// Approach : Two traversals (First loop finds max, second loop finds second max)

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    int getSecondLargest(vector<int>& arr) {
        int n = arr.size();
        int firstLargest = -1;
        int secondLargest = -1;
        
        // find first largest element
        for(int i = 0; i < n; i++) {
            if(arr[i] > firstLargest) {
                firstLargest = arr[i];
            }
        }
        
        // find second largest element
        for(int i = 0; i < n; i++) {
            if(arr[i] != firstLargest) {
                secondLargest = max(secondLargest, arr[i]);
            }
        }
        
        return secondLargest;
    }
};