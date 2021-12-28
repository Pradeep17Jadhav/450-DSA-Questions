// Question 8 - Kadane's Algorithm [VVV Imp]
// Find the contiguous subarray (containing at least one number) which has the largest sum and return its sum.
// https://leetcode.com/problems/maximum-subarray/
// https://practice.geeksforgeeks.org/problems/kadanes-algorithm-1587115620/1

#include <iostream>
#include <vector>
using namespace std;

int maxSumOfSubArray(vector<int>&arr) //call by reference
{
    int currSum, maxSum;
    currSum = maxSum = arr[0];
    for(int i = 1; i < arr.size(); i++)
    {
        // currSum += arr[i];
        // if(arr[i] > currSum)
        //     currSum = arr[i];

        // if(currSum > maxSum)
        //     maxSum = currSum;
            
        //using max function
        currSum = max(currSum + arr[i], arr[i]);
        maxSum = max(currSum, maxSum);
    }

    return maxSum;
}

int main()
{
    vector<int> arr = {-2,1,-3,4,-1,2,1,-5,4}; //6
    // vector<int> arr = {5,4,-1,7,8}; //23
    // vector<int> arr = {-1}; //-1
    // vector<int> arr = {1}; //1

    int maxSum = maxSumOfSubArray(arr);
    cout << "Maximum sum of subarray is: " << maxSum << endl;
    return 0;
}