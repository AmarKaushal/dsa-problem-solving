// Problem : Second Largest Element in an Array
// Platform : GeeksforGeeks
// Problem Link : https://www.geeksforgeeks.org/problems/second-largest3735/1
// Time Complexity : O(N)
// Space Complexity : O(1)
// Approach 1 : Two traversals (First loop finds max, second loop finds second max)
// Approach 2 : Single traversal optimal approach (Maintaining first and second largest in one pass)

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
        
        for(int i = 0; i < n; i++) {
            if(arr[i] > firstLargest) {
                // old largest become second largest
                secondLargest = firstLargest;
                firstLargest = arr[i];
            }
            else if(arr[i] > secondLargest && arr[i] != firstLargest) {
                secondLargest = arr[i];
            }
        }
        
        return secondLargest;
    }
};