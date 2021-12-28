// Question 4 - Sort an array of 0s, 1s and 2s in ascending order.
// Dutch National Flag Algorithm (DNF Sort Algorithm)
// https://practice.geeksforgeeks.org/problems/sort-an-array-of-0s-1s-and-2s4231/1
// https://www.youtube.com/watch?v=2C4CQ32961Y

#include <iostream>
using namespace std;    
    
void sort012(int a[], int n)
{
    int low, mid, high, temp;
    low = mid = 0;
    high = n-1;
    while(mid <= high)
    {
        if(a[mid] == 0)
        {
            temp = a[low];
            a[low] = a[mid];
            a[mid] = temp;
            low++;
            mid++;
        }
        else if(a[mid] == 1)
        {
            mid++;
        }
        else
        {
            temp = a[mid];
            a[mid] = a[high];
            a[high] = temp;
            high--;
        }
    }
}

int main()
{
    int arr[10] = {2, 0, 1, 2, 0, 0, 2, 1, 1, 0};
    int n = sizeof(arr) / sizeof(arr[0]);

    for(int i:arr)
    {
        cout << i << " ";
    }
    cout << endl;

    sort012(arr, n);
    
    for(int i:arr)
    {
        cout << i << " ";
    }
    cout << endl;
}