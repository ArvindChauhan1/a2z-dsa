//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
public:
    // Function to merge the arrays.
    vector<int> sortedArray(vector<int> a1, vector<int> a2)
    {

        vector<int> v;
        int i = 0, j = 0;
        int n = a1.size(), m = a2.size();

        while (i < n && j < m)
        {
            if (a1[i] < a2[j])
            {
                if (v.empty() || v.back() != a1[i])
                    v.push_back(a1[i]);
                i++;
            }
            else
            {
                if (v.empty() || v.back() != a2[j])
                    v.push_back(a2[j]);
                j++;
            }
        }
        while (i < n)
        {
            if (v.empty() || v.back() != a1[i])
                v.push_back(a1[i]);
            i++;
        }
        while (j < m)
        {
            if (v.empty() || v.back() != a2[j])
                v.push_back(a2[j]);
            j++;
        }

        return v;
    }
};

//{ Driver Code Starts.

int main()
{

    int T;
    cin >> T;

    while (T--)
    {
        int n, m;
        cin >> n >> m;

        vector<int> arr1(n);
        vector<int> arr2(m);

        for (int i = 0; i < n; i++)
        {
            cin >> arr1[i];
        }

        for (int i = 0; i < m; i++)
        {
            cin >> arr2[i];
        }
        Solution ob;
        vector<int> res = ob.sortedArray(arr1, arr2);

        for (auto &&i : res)
        {
            cout << i << " ";
        }

        cout << endl;
    }

    return 0;
}

// } Driver Code Ends