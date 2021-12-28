// Questin 6 - Union and Intersection of two arrays
// Union - https://practice.geeksforgeeks.org/problems/union-of-two-arrays3538/1
// Intersection - https://leetcode.com/problems/intersection-of-two-arrays/

#include<iostream>
#include<set>
using namespace std;

int doUnion(int a[], int n, int b[], int m)  {
    set<int> s;
    for(int i = 0; i < n; i++)
    {
        s.insert(a[i]);
    }
    for(int i = 0; i < m; i++)
    {
        s.insert(b[i]);
    }
    return s.size();
}

int doIntersection(int a[], int n, int b[], int m) {
    set<int> s;
    set<int> res;
    for(int i = 0; i < n; i++)
    {
        s.insert(a[i]);
    }

    for(int i = 0; i < m; i++)
    {
        if(s.find(b[i]) != s.end())
            res.insert(a[i]);
    }

    return res.size();
}

int main()
{
    int a[] = {85, 25, 1, 32, 54, 6};
    int n = sizeof(a) / sizeof(a[0]);
    int b[] = {25, 2, 84, 1, 62};
    int m = sizeof(b) / sizeof(b[0]);
    int unionSize = doUnion(a, n, b, m);
    int intersectionSize = doIntersection(a, n, b, m);
    cout << "Size of union array is: " << unionSize << endl;
    cout << "Size of intersection array is: " << intersectionSize;
    return 0;
}