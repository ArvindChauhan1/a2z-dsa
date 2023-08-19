#include <bits/stdc++.h>
using namespace std;

//{ Driver Code Starts

class Solution
{
public:
    // Function

    vector<int> reverseArray(int n, vector<int> &nums)
    {
        if (n == (nums.size() + 1) / 2)
            return nums;
        // swap
        int t = nums[nums.size() - n];
        nums[nums.size() - n] = nums[n - 1];
        nums[n - 1] = t;
        return reverseArray(n - 1, nums);
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
        vector<int> v;
        for (int i = 0; i < n; i++)
        {
            int t;
            cin >> t;
            v.push_back(t);
        }

        Solution ob;

        // call function
        vector<int> res = ob.reverseArray(n, v);
        // display result

        for (auto &&i : v)
        {
            cout << i << " ";
        }

        cout << endl;
    }
}