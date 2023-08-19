#include <bits/stdc++.h>
using namespace std;

//{ Driver Code Starts

class Solution
{
public:
    // Function
    vector<int> v;
    void fibonacci(int a, int b, int n)
    {
        if (n == 0)
            return;
        v.push_back(b);
        fibonacci(b, b + a, n - 1);
    }
    vector<int> generateFibonacciNumbers(int n)
    {
        v.push_back(0);
        fibonacci(0, 1, n - 1);
        return v;
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
        int n;
        cin >> n;
        Solution ob;

        // call function
        vector<int> v = ob.generateFibonacciNumbers(n);
        // display result
        for (auto &&i : v)
        {
            cout << i << " ";
        }

        cout << endl;
    }
}