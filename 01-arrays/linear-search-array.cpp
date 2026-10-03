// Problem : Search an Element in an Array (linear Search)
// Platform : GeeksforGeeks
// Problem Link : https://www.geeksforgeeks.org/problems/search-an-element-in-an-array-1587115621/1
// Time Complexity : O(N)
// Space Complexity : O(1)
// Approach : Traverse the array linearly form left to right and compare each element with target x

#include <iostream>;
#include <vector>;
using namespace std;

class Solution {
  public:
    int search(vector<int>& arr, int x) {
        int n = arr.size();
        for(int i=0;i<n;i++)
        {
            if(arr[i] == x)
            return i;
        }
        
        return -1;
    }
};



