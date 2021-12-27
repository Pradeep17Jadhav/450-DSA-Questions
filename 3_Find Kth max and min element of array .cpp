#include<iostream>
#include<queue>
using namespace std;

class Solution{
    public:
    int kthSmallest(int arr[], int n, int k) {
        priority_queue<int> queue;
        for(int i = 0; i < n; i++)
        {
            queue.push(arr[i]);
            if(queue.size() > k)
                queue.pop();
        }
        return queue.top();
    }
};

int main()
{
    int n;
    int k = 0;
    cout << "Enter number of elements: ";
    cin >> n;
    int arr[n];
    cout << "\nEnter elements: ";
    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "Enter K: ";
    cin >> k;

    Solution obj;
    int ans = obj.kthSmallest(arr, n, k);
    cout << "Kth smallest element is: " << ans;
    
    return 0;
}