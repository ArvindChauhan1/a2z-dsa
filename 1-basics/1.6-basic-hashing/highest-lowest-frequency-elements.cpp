#include <bits/stdc++.h>
using namespace std;

//{ Driver Code Starts

class Solution
{
public:
    // Function
    vector<int> getFrequencies(vector<int> &v)
    {
        vector<int> out(2, 0);
        map<int, int> m;
        for (auto &&i : v)
            m[i]++;

        int min = INT_MAX, max = INT_MIN;
        for (auto it = m.begin(); it != m.end(); it++)
        {
            if (it->second > max)
            {
                max = it->second;
                out[0] = it->first;
            }
            if (it->second < min)
            {
                min = it->second;
                out[1] = it->first;
            }
        }
        return out;
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
        vector<int> arr;
        for (int i = 0; i < n; i++)
        {
            int a;
            cin >> a;
            arr.push_back(a);
        }

        Solution ob;

        // call function
        vector<int> v = ob.getFrequencies(arr);
        // display result
        for (auto &&i : v)
            cout << i << " ";

        cout << endl;
    }
}