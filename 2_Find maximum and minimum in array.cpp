#include<iostream>
using namespace std;

int main()
{
    int n;
    int min, max;
    cout << "Enter number of elements: ";
    cin >> n;
    int arr[n];
    cout << "\nEnter elements: ";
    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    min = max = arr[07];

    for(int i = 1; i < n; i++)
    {
      if(arr[i] > max)
        max = arr[i];

      if(arr[i] < min)
        min = arr[i];
    }
	
	cout << "Minimum element is " << min << endl;
	cout << "Maximum element is " << max;
		
    return 0;
}