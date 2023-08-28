//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
// User function template for C++
class Solution
{
public:
    // Function returns the second
    // largest elements
    int print2largest(int arr[], int n)
    {
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
            return -1;
        return res;
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
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.print2largest(arr, n);
        cout << ans << "\n";
    }
    return 0;
}

// } Driver Code Ends