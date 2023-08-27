#include <bits/stdc++.h>
using namespace std;

//{ Driver Code Starts

class Solution
{
public:
    // Function
    void selectionSort(vector<int> &arr)
    {
        // Write your code here.
        for (int i = 0; i < arr.size(); i++)
        {
            int min = i;
            for (int j = i + 1; j < arr.size(); j++)
            {
                if (arr[j] < arr[min])
                    min = j;
            }
            int t = arr[i];
            arr[i] = arr[min];
            arr[min] = t;
        }

        for (auto &&i : arr)
        {
            cout << i << " ";
        }
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
        vector<int> v(n);
        for (int i = 0; i < n; i++)
            cin >> v[i];

        Solution ob;

        // call function
        ob.selectionSort(v);
        // display result

        cout << endl;
    }
}