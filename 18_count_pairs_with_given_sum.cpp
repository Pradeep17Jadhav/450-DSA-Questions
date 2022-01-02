#include<iostream>
#include<algorithm>
#include<unordered_map>
using namespace std;

int getPairsCount(int arr[], int n, int k) {
    unordered_map<int, int> m;
    for(int i = 0; i < n; i++)
    {
        m[arr[i]]++;
    }

    int count = 0;
    for(int i = 0; i < n; i++)
    {
            count += m[k - arr[i]];
            if(k - arr[i] == arr[i])
            count--;
    }
    
    return count / 2;
}

int main()
{
    int n = 4;
    int k = 6;
    int arr[] = {1, 5, 7, 1};
    int count = getPairsCount(arr, n, k);
    cout << "Count is: " << count;
    return 0;
}