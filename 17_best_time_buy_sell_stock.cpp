
#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minPrice = prices[0];
        int maxProfit = 0;
        
        for(int i: prices)
        {
            minPrice = min(i, minPrice);
            maxProfit = max(i - minPrice, maxProfit);
        }
        return maxProfit;
    }
};

int main()
{
    vector<int> prices{7,1,5,3,6,4};
    // vector<int> prices{7,6,4,3,1};
    Solution obj;
    int maxProfit = obj.maxProfit(prices);
    cout << "Max profit is: " << maxProfit;
    return 0;
}