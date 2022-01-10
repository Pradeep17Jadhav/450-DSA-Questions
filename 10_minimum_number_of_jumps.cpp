// Question 10 - Minimum number of jumps
// https://practice.geeksforgeeks.org/problems/minimum-number-of-jumps-1587115620/1

// Solution -->
#include<iostream>
#include<algorithm>
using namespace std;

class Solution{
  public:
  // {1, 3, 5, 8, 9, 2, 6, 7, 6, 8, 9}
    int minJumps(int arr[], int n){
        if(n < 1)
            return 0;
        if(arr[0] == 0)
            return -1;
    
        int jumps = 0; //1
        int steps = arr[0]; //0
        int maxReach = arr[0]; //4
        for(int i = 1; i < n; i++) //1
        {
            if(arr[i] == 0)
                return -1;
            
            maxReach = max(maxReach, i + arr[i]);
            steps--;
            
            if(steps == 0)
            {
                jumps++;
                steps = arr[i];
            }
        }
    
        return jumps;
    }
};