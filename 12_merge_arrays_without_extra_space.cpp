// Question 12 - Merge two sorted arrays without using extra space.
// https://practice.geeksforgeeks.org/problems/merge-two-sorted-arrays5135/1

#include<iostream>
#include<algorithm>
using namespace std;

void display(int arr1[], int arr2[], int n, int m)
{
    for(int i = 0; i < n; i++)
    {
        cout << arr1[i] << " ";
    }
    for(int i = 0; i < m; i++)
    {
        cout << arr2[i] << " ";
    }
    cout << endl;
}

void merge(int arr1[], int arr2[], int n, int m) {
    int i, j, k;
    i = j = 0;
    k = n - 1;
    while(i <= k && j < m)
    {
        if(arr1[i] < arr2[j])
        {
            i++;
        }
        else
        {
            swap(arr1[k], arr2[j]);
            j++;
            k--;
        }
    }
    sort(arr1, arr1 + n);
    sort(arr2, arr2 + m);
}

int main()
{
    int arr1[] = {1, 3, 5, 7};
    int arr2[] = {0, 2, 6, 8, 9};
    int n = sizeof(arr1) / sizeof(arr1[0]);
    int m = sizeof(arr2) / sizeof(arr2[0]);
    display(arr1, arr2, n, m);
    merge(arr1, arr2, n, m);
    display(arr1, arr2, n, m);
    return 0;
}