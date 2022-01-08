// Question 14 - Merge Intervals
// https://leetcode.com/problems/merge-intervals/

// Similar questions ->
// https://leetcode.com/problems/non-overlapping-intervals/
// https://leetcode.com/problems/meeting-rooms/
// https://leetcode.com/problems/meeting-rooms-ii/

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        if(intervals.size() <= 1) return intervals;
        sort(intervals.begin(), intervals.end());
        vector<vector<int>> newIntervals;
        newIntervals.push_back(intervals[0]);
        for(int i = 1; i < intervals.size(); i++)
        {
            if(newIntervals.back()[1] >= intervals[i][0])
                newIntervals.back()[1] = max(newIntervals.back()[1], intervals[i][1]);
            else
                newIntervals.push_back(intervals[i]);
        }
        return newIntervals;
    }
};

int main()
{
    Solution obj;
    vector<vector<int>> intervals;
    //[[1,3],[2,6],[8,10],[15,18]]
    vector<int> a{1,3};
    vector<int> b{2,6};
    vector<int> c{8, 10};
    vector<int> d{15, 18};
    intervals.push_back(a);
    intervals.push_back(b);
    intervals.push_back(c);
    intervals.push_back(d);
    vector<vector<int>> res = obj.merge(intervals);

    for (int i = 0; i < res.size(); i++) {
            cout << "[" << res[i][0] << ", " << res[i][1] << "]";
    }
    return 0;
}