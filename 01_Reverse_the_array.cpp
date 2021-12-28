//https://www.geeksforgeeks.org/write-a-program-to-reverse-an-array-or-string/
#include <iostream>
using namespace std;

void printArray(int arr[], int n)
{
    for(int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void reverse(int arr[], int n)
{
    for(int i = 0; i < n /2; i++)
    {
        int temp = arr[i];
        arr[i] = arr[n - i - 1];
        arr[n - i - 1] = temp;
    }
}


int main(){
    int n;
    cout << "Enter a number of elements ";
    cin >> n;
    int arr[n];
    cout << "Enter elements: ";

    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << "Before: ";
    printArray(arr, n);

    reverse(arr, n);

    cout << "After: ";
    printArray(arr, n);

    return 0;
}