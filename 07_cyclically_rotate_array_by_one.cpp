// Question 7 - Cyclically rotate the array by one position in clock-wise direction
// https://practice.geeksforgeeks.org/problems/cyclically-rotate-an-array-by-one2614/1

#include<iostream>
using namespace std;

void rotate(int arr[], int n)
{
    int temp = arr[n - 1];
    for(int i = n - 1; i > 0; i--)
    {
        arr[i] = arr[i - 1];
    }
    arr[0] = temp;
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7};
    int n = sizeof(arr) / sizeof(arr[0]);

    for(int i:arr)
    {
        cout << i << " ";
    }
    cout << endl;

    rotate(arr, n);

    for(int i:arr)
    {
        cout << i << " ";
    }
    return 0;
}