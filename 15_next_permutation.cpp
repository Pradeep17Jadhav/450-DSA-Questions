#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int breakdown = -1;
        for(int i = nums.size() - 1; i > 0; i--)
        {
            if(nums[i - 1] < nums[i])
            {
                breakdown = i - 1;
                break;
            }
        }
        if(breakdown == -1)
        {
            reverse(nums.begin(), nums.end());
        }
        else
        {
            for(int i = nums.size() - 1; i >= 0; i--)
            {
                if(nums[i] > nums[breakdown])
                {
                    swap(nums[i], nums[breakdown]);
                    reverse(nums.begin() + breakdown + 1, nums.end());
                    break;
                }
            }
        }
    }
};

int main()
{
    vector<int> nums{3,1,4,2};

    cout << "Before: ";
    for(int i:nums)
        cout << i << " ";

    Solution obj;
    obj.nextPermutation(nums);

    cout << "\nAfter: ";
    for(int i:nums)
        cout << i << " ";

    return 1;
}