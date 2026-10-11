// Problem : Rotate Array Clockwise (Using Temp Array)
// Platform : GeeksforGeeks
// Time Complexity : O(N)
// Space Complexity : O(N) for approach-1 & O(1) for approach-2
// Approach 1 : using extra temp array space
// Approach 2 : reversal algorithm in-place


#include <iostream>
#include <vector>
using namespace std;

void Reverse(vector<int>& arr, int start , int end)
{
    int left = start , right = end;
    while(left<right)
    {
        int temp = arr[left];
        arr[left] = arr[right];
        arr[right] = temp;
        left++, right--;
    }
};
class Solution {
public:
    void rotateclockwise(vector<int>& arr, int k) {
        int n = arr.size();
        k = k % n; // Handles cases where k >= n
        
        // Step 1: Reverse the entire array
        Reverse(arr,0,n-1);
        
        // Step 2: Reverse the first 0 to k-1 elements
        Reverse(arr,0,k-1);
        
        // Step 3: Reverse the remaining k to n-1 elements
        Reverse(arr,k,n-1);
    }
};