//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
public:
    bool isFactorial(int n)
    {
        for (int i = 1;; i++)
        {
            if (n % i == 0)
                n /= i;
            else
                break;
        }

        return n == 1 ? true : false;
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int N;
        cin >> N;
        Solution ob;
        cout << (ob.isFactorial(N) ? "Yes" : "No") << endl;
    }
    return 0;
}
// } Driver Code Ends