#include <bits/stdc++.h>
using namespace std;

//{ Driver Code Starts

class Solution
{
public:
    // Function
    void insertionSort(int arr[], int n)
    {
        // write your code here

        for (int i = 0; i < n; i++)
        {
            int j = i;
            while (j > 0 && j < n && arr[j - 1] > arr[j])
            {
                int t = arr[j - 1];
                arr[j - 1] = arr[j];
                arr[j] = t;
                j--;
            }
        }

        for (int i = 0; i < n; i++)
        {
            cout << arr[i] << " ";
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
        ob.insertionSort(v, n);
        // display result

        cout << endl;
    }
}