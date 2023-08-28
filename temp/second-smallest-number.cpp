//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

vector<int> minAnd2ndMin(int a[], int n);

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n];

        for (int i = 0; i < n; i++)
            cin >> a[i];

        vector<int> ans = minAnd2ndMin(a, n);
        if (ans[0] == -1)
            cout << -1 << endl;
        else
            cout << ans[0] << " " << ans[1] << endl;
    }
    return 0;
}
// } Driver Code Ends

vector<int> minAnd2ndMin(int arr[], int n)
{
    vector<int> v;
    int g = INT_MAX, res = INT_MAX;
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
    {
        v.push_back(-1);
        return v;
    }
    v.push_back(g);
    v.push_back(res);
    return v;
}