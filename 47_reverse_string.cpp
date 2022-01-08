#include<iostream>
#include<vector>
using namespace std;

void reverse(vector<char> &s)
{
    int start = 0;
    int end = s.size();
    while(start < end)
    {
        char temp = s[start];
        s[start] = s[end];
        s[end] = temp;
        start++;
        end--;
    }
}

int main()
{
    vector<char> s{'h','e','l','l','o'};
    
    for(int i:s)
        cout << (char)i << " ";
    cout << endl;

    reverse(s);

    for(int i:s)
        cout << (char)i << " ";
    return 0;
}