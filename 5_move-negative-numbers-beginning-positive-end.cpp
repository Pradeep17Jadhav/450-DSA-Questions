// Question 5 - Move all negative numbers to beginning and positive to end with constant extra space.
// https://www.geeksforgeeks.org/move-negative-numbers-beginning-positive-end-constant-extra-space/

#include<iostream>
using namespace std;

// Sort method
// O(N) Time
// O(1) Space
void rearrange(int arr[], int n)
{
    int ptr = 0;
    for(int i = 0; i < n; i++)
    {
        if(arr[i] < 0)
        {
            swap(arr[ptr], arr[i]);
            ptr++;
        }
    }
}

// Two Pointer method
// O(N) Time
// O(1) Space
void rearrangeTwoPointer(int arr[], int start, int end)
{
    while(start < end)
    {
        if(arr[start] < 0 and arr[end] < 0)
        {
            start++;
        }
        else if(arr[start] > 0 and arr[end] < 0)
        {
            swap(arr[start], arr[end]);
            start++;
            end--;
        }
        else if(arr[start] > 0 and arr[end] > 0)
        {
            end--;
        }
        else
        {
            start++;
            end--;
        }
    }
}

int main()
{
    int arr[] = {-1, 2, -3, 4, 5, 6, -7, 8, 9};
    int n = sizeof(arr) / sizeof(arr[0]);

    // rearrange(arr, n);
    rearrangeTwoPointer(arr, 0, n - 1);
    
    for(int i:arr)
    {
        cout << i << " ";
    }

    return 0;
}