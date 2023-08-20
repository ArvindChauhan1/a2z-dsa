//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++
class Solution
{
public:
    int i = 1;
    void printTillN(int N)
    {
        if (N == 0)
            return;
        cout << i++ << " ";
        printTillN(N - 1);
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
        ob.printTillN(N);
        cout << endl;
    }
    return 0;
}
// } Driver Code Ends