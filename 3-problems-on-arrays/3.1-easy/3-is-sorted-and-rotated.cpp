//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function template for C++

class Solution
{
public:
    bool isSortedRotated(vector<int> &nums)
    {
        int n = nums.size(), t = 0;
        for (int i = 1; i < n; i++)
            if (nums[i - 1] > nums[i])
                t++;

        if (nums[n - 1] > nums[0])
            t++;

        return t <= 1;
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
        bool ans = ob.isSortedRotated(arr);
        cout << ans << "\n";
    }
    return 0;
}

// } Driver Code Ends