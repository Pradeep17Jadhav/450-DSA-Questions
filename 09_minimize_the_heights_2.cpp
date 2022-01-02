/* Question 9 - Minimize the Heights II
https://practice.geeksforgeeks.org/problems/minimize-the-heights3351/1
https://leetcode.com/problems/smallest-range-ii/

Given an array arr[] denoting heights of N towers and a positive integer K, 
you have to modify the height of each tower either by increasing or decreasing them by K only once. 
After modifying, height should be a non-negative integer. 
Find out what could be the possible minimum difference of the height of shortest 
and longest towers after you have modified each tower.
*/

#include<iostream>
#include<vector>
#include <algorithm>
using namespace std;

int smallestRangeII(vector<int>& nums, int k) {
    sort(nums.begin(), nums.end());
    int minDiff, maxDiff;
    int n = nums.size();
    int left = nums[0] + k;
    int right = nums[n - 1] - k;
    int res = nums[n - 1] - nums[0];
    
    for(int i = 0; i < n - 1; i++)
    {
        maxDiff = max(right, nums[i] + k);
        minDiff = min(left, nums[i + 1] - k);
        res = min(res, maxDiff - minDiff);
    }
    return res;
}

int main()
{
    vector<int> nums = {1,3,6}; //for k=3, ans=3
    // vector<int> nums = {0,10}; //for k=2, ans=6
    // vector<int> nums = {1}; //for k=0, ans=0
    int k = 3;
    int smallest = smallestRangeII(nums, k);
    cout << "Smallest range is: " << smallest << endl;
    return 0;
}