//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
class Solution
{
public:
    void printTriangle(int n)
    {
        for (int i = 1; i <= n; i++)
        {
            // first number triangle
            for (int j = 1; j <= n; j++)
            {
                if (j > i)
                {
                    cout << "  ";
                }
                else
                {
                    cout << j << " ";
                }
            }
            for (int j = n; j > 0; j--)
            {
                if (j > i)
                {
                    cout << "  ";
                }
                else
                {
                    cout << j << " ";
                }
            }
            cout << endl;
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
        ob.printTriangle(n);
    }
    return 0;
}
// } Driver Code Ends