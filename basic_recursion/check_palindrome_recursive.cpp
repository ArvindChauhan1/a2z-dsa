#include <bits/stdc++.h>
using namespace std;

//{ Driver Code Starts

class Solution
{
public:
    // Function
    string reverseString(string str, int n)
    {
        if (n == (str.length() + 1) / 2)
        {
            return str;
        }
        char t = str[str.length() - n];
        str[str.length() - n] = str[n - 1];
        str[n - 1] = t;
        return reverseString(str, n - 1);
    }
    bool isPalindrome(string &str)
    {
        return str == reverseString(str, str.length()) ? true : false;
    }
};

// } Driver Code Ends

int main()
{
    long long t;
    cin >> t; // testcases
    while (t--)
    {
        // take input
        string s;
        cin >> s;

        Solution ob;

        // call function
        bool res = ob.isPalindrome(s);

        // display result
        cout << res ? "Yes" : "No";

        cout << endl;
    }
}