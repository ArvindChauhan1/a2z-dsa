//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
// User function template for C++
class Solution
{
public:
    // Function returns the second
    // second largest elements
    vector<int> getSecondOrderElements(int n, vector<int> arr)
    {
        vector<int> v;
        int g = INT_MIN, res = INT_MIN;
        for (int i = 0; i < n; i++)
        {
            if (g < arr[i])
            {
                res = g;
                g = arr[i];
            }
            if (res < arr[i] && arr[i] < g)
                res = arr[i];
        }
        if (res == INT_MIN || res == g)
            v.push_back(-1);
        v.push_back(res);

        // second smallest
        g = INT_MAX, res = INT_MAX;
        for (int i = 0; i < n; i++)
        {
            if (g > arr[i])
            {
                res = g;
                g = arr[i];
            }
            if (res > arr[i] && arr[i] > g)
                res = arr[i];
        }
        if (res == g || res == INT_MAX)
            v.push_back(-1);

        v.push_back(res);
        return v;
    }
};

//{ Driver Code Starts.

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> arr(n);
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        Solution ob;
        vector<int> ans = ob.getSecondOrderElements(n, arr);
        for (auto &&i : ans)
        {
            cout << i << " ";
        }
        cout << endl;
    }
    return 0;
}

// } Driver Code Ends