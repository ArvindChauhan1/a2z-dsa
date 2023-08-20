//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
public:
    void print_divisors(int n)
    {
        if (n == 1)
        {
            cout << n;
            return;
        }
        set<int> v;
        for (int i = 1; i <= sqrt(n); i++)
        {
            if (n % i == 0)
            {
                v.insert(i);
                if (n / i != i)
                    v.insert(n / i);
            }
        }
        for (auto &&i : v)
        {
            cout << i << " ";
        }
    }
};

//{ Driver Code Starts.
int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int n;
        cin >> n;
        Solution ob;
        ob.print_divisors(n);
        cout << endl;
    }
    return 0;
}
// } Driver Code Ends