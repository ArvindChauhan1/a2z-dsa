//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
class Solution
{
public:
    void printSquare(int n)
    {
        int count = 1;
        for (int i = 0; i < n * 2 - 1; i++)
        {
            for (int j = 0; j < n * 2 - 1; j++)
            {
                int top = i;
                int bottom = 2 * n - 2 - i;
                int left = j;
                int right = 2 * n - 2 - j;
                cout << n - min(min(left, right), min(top, bottom))<<" ";
            }
            cout << "\n";
        }
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

        Solution ob;
        ob.printSquare(n);
    }
    return 0;
}
// } Driver Code Ends