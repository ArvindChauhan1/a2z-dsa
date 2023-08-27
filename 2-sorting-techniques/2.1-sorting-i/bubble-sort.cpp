#include <bits/stdc++.h>
using namespace std;

//{ Driver Code Starts

class Solution
{
public:
    // Function
    void bubbleSort(int arr[], int n)
    {
        // write your code here
        for (int i = n - 1; i >= 0; i--)
        {
            int f = true;
            for (int j = 0; j < i; j++)
            {
                if (arr[j] > arr[j + 1])
                {
                    f = false;
                    int t = arr[j];
                    arr[j] = arr[j + 1];
                    arr[j + 1] = t;
                }
            }
            if (f)
                break;
        }
        for (int i = 0; i < n; i++)
        {
            cout << arr[i] << endl;
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
        int v[n];
        for (int i = 0; i < n; i++)
            cin >> v[i];

        Solution ob;

        // call function
        ob.bubbleSort(v, n);
        // display result

        cout << endl;
    }
}