// Questin 6 - Union and Intersection of two arrays
// Union - https://practice.geeksforgeeks.org/problems/union-of-two-arrays3538/1
// Intersection - https://leetcode.com/problems/intersection-of-two-arrays/

#include<iostream>
#include<set>
#include<unordered_set>
#include<vector>
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

//using sets
int doIntersection1(int a[], int n, int b[], int m) {
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

//using unordered sets and vector
int doIntersection2(int a[], int n, int b[], int m) {
    unordered_set<int> s;
    vector<int> res;
    for(int i = 0; i < n; i++)
    {
        s.insert(a[i]);
    }

    for(int i = 0; i < m; i++)
    {
        if(s.count(b[i]))
        {
            res.push_back(b[i]);
            s.erase(b[i]);
        }
    }

    return res.size();
}

int main()
{
    int a[] = {85, 25, 1, 32, 54, 6};
    int n = sizeof(a) / sizeof(a[0]);
    int b[] = {25, 2, 84, 1, 62, 6};
    int m = sizeof(b) / sizeof(b[0]);
    int unionSize = doUnion(a, n, b, m);
    int intersectionSize1 = doIntersection1(a, n, b, m);
    int intersectionSize2 = doIntersection2(a, n, b, m);
    cout << "Size of union array is: " << unionSize << endl;
    cout << "Size of intersection array 1 is: " << intersectionSize1 << endl;
    cout << "Size of intersection array 2 is: " << intersectionSize2 << endl;
    return 0;
}