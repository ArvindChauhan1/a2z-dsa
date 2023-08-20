#include <bits/stdc++.h>
using namespace std;

//{ Driver Code Starts

class Solution
{
public:
    // Function
    bool isFactorial(long long int n)
    {
        for (long long int i = 1;; i++)
        {
            if (n % i == 0)
                n /= i;
            else
                break;
        }

        return n == 1 ? true : false;
    }

    vector<long long> v;
    vector<long long> factorialNumbers(long long n)
    {
        if (n == 1)
        {
            v.push_back(n);
            sort(v.begin(), v.end());
            return v;
        }
        if (isFactorial(n))
            v.push_back(n);
        return factorialNumbers(n - 1);
    }
};

// } Driver Code Ends

int main()
{
    long long t;
    cin >> t; // testcases
    while (t--)
    {
        long long N;
        cin >> N;
        Solution ob;

        vector<long long> res = ob.factorialNumbers(N);
        cout << res.size() << "\n";
        for (auto &&i : res)
        {
            cout << i << " ";
        }

        cout << endl;
    }
}