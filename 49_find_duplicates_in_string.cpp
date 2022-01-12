// Question 49 - Find the duplicates in a string
// https://www.geeksforgeeks.org/print-all-the-duplicates-in-the-input-string/

#include<iostream>
#include<unordered_map>
using namespace std;

//time complexity is O(NlogN) for map
//time complexity is O(N) for unordered map
void findDuplicate(string &str)
{
    //map has time complexity logN
    //unordered map has time complexity O(1)
    unordered_map<char, int> hash;
    for(char c:str)
    {
        hash[c]++;
    }

    for(auto i: hash)
    {
        if(i.second > 1)
            cout << "Count of " << i.first << " is " << i.second << endl;
    }
}

int main()
{
    string str = "this is a string for test";
    findDuplicate(str);
    return 1;
}