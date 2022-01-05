// Question 19 - Find common elements in three sorted arrays
// Backtracking is used
// https://leetcode.com/problems/intersection-of-three-sorted-arrays 
// https://practice.geeksforgeeks.org/problems/common-elements1132/1

#include <iostream>
#include <vector>
using namespace std;

class Solution
{
    public:    
       vector <int> commonElements (vector<int> &A, vector<int> &B, vector<int> &C, int n1, int n2, int n3)
        {
            int ptr1 = 0, ptr2 = 0, ptr3 = 0;
            vector<int>common;
            while(ptr1 < n1 && ptr2 < n2 && ptr3 < n3)
            {
                if(A[ptr1] == B[ptr2] and B[ptr2] == C[ptr3])
                {
                    if(common.size() == 0 or common.back() != A[ptr1])
                        common.push_back(A[ptr1]);
                    ptr1++;
                    ptr2++;
                    ptr3++;
                }
                    
                else
                {
                    if(A[ptr1] < B[ptr2])
                        ptr1++;
                    else if(B[ptr2] < C[ptr3])
                        ptr2++;
                    else
                        ptr3++;
                }
            }
            return common;
        }

};



int main()
{
    int n1, n2, n3;
    n1 = 6, n2 = 9, n3 = 6;
    vector<int> A {-4, -2, 5, 42, 68, 97};
    vector<int> B {-11, -10, -4, 0, 1, 15, 42, 97, 100};
    vector<int> C {-4, 18, 27, 42, 97, 100};
    
    Solution ob;        
    vector <int> res = ob.commonElements (A, B, C, n1, n2, n3);
    if (res.size () == 0) 
        cout << -1;
    for (int i = 0; i < res.size (); i++) 
        cout << res[i] << " "; 
    return 0;
}