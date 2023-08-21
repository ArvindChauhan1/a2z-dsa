#include <bits/stdc++.h>
using namespace std;

//{ Driver Code Starts

class Solution
{
public:
    // Function
    vector<int> countFrequency(int n, int x, vector<int> &nums)
    {
        vector<int> v(n, 0);
        for (int i = 0; i < n; i++)
            v[nums[i] - 1]++;
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
        int n, x;
        cin >> n >> x;
        vector<int> arr;
        for (int i = 0; i < n; i++)
        {
            int a;
            cin >> a;
            arr.push_back(a);
        }

        Solution ob;

        // call function
        vector<int> v = ob.countFrequency(n, x, arr);
        // display result
        for (auto &&i : v)
            cout << i << " ";

        cout << endl;
    }
}