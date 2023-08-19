#include <bits/stdc++.h>
using namespace std;

//{ Driver Code Starts

class Solution
{
public:
    // Function

    long sum_of_divisors(int n)
    {
        if (n == 1)
            return n;

        vector<int> v;
        for (int i = 1; i <= sqrt(n); i++)
        {
            if (n % i == 0)
            {
                v.push_back(i);
                if (n / i != i)
                    v.push_back(n / i);
            }
        }
        int sum = 0;
        for (auto &&i : v)
            sum += i;
        return sum;
    }

    int sumOfAllDivisors(int n)
    {
        int sum = 0;
        for (int i = 1; i <= n; i++)
        {
            sum += sum_of_divisors(i);
        }
        return sum;
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
        Solution obj;

        // call function
        long int result = obj.sumOfAllDivisors(n);
        // display result

        cout << result;
        cout << endl;
    }
}