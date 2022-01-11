// Question 48 - Check if string is palindrome or not
// https://practice.geeksforgeeks.org/problems/palindrome-string0817/1
// https://leetcode.com/problems/valid-palindrome/

#include <iostream>
#include <string>
using namespace std;

class Solution{
public:	
	int isPalindrome(string S)
	{
	    int n = S.size();
	    for(int i = 0; i < n / 2; i++)
	    {
	        if(S[i] != S[n - i - 1])
	            return 0;
	    }
	    return 1;
	}
};

int main() 
{
    string s = "racecar";
    Solution ob;
    if(ob.isPalindrome(s))
        cout << "Palindrome" << "\n";
    else
        cout << "Not a Palindrome" << "\n";
    return 0;
} 