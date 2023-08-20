#include <bits/stdc++.h>
using namespace std;

//{ Driver Code Starts

class Solution
{
public:
    // Function
    bool palindrome(int n)
    {
        if (n < 0)
            return false;
        int rev = 0, cpy = n;
        while (cpy > 0)
        {
            int rem = cpy % 10;
            rev = (rev * 10) + rem;
            cpy /= 10;
        }
        return rev == n ? true : false;
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
        int num;
        cin >> num;
        Solution obj;

        // call function
        bool result = obj.palindrome(num);
        // display result
        if (result)
            cout << "true";
        else
            cout << "false";

        cout
            << endl;
    }
}