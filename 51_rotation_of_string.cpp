// Question 51 - check if strings are rotations of each other or not
// https://www.geeksforgeeks.org/a-program-to-check-if-strings-are-rotations-of-each-other/

#include<iostream>
#include<algorithm>
using namespace std;

bool checkRotation(string &s1, string &s2)
{
    if(s1.size() != s2.size())
        return false;

    s1 += s1;
    return (s1.find(s2) != string::npos);
}

int main()
{
    string s1 = "ABACD";
    string s2 = "CDABA";
    if(checkRotation(s1, s2))
        cout << "Rotation exists";
    else
        cout << "Not a rotation";
        
    return 0;
}