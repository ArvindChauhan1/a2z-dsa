//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function template for C++

class Solution
{
public:
    int missingNumber(vector<int> &array, int n)
    {
        // 0.linear search
        // 1.using map
        //. 2. sum of n natural nums - sum of array => missing number ✅
        // 3. xor approach xor(xor of n natural nums and xor of elements of array)=> missing number
        int sum = (n * (n + 1)) / 2;
        cout << sum << "\n";
        int t = 0;
        for (int i = 0; i < n - 1; i++)
            t += array[i];
        return sum - t;
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

        vector<int> array(n - 1);
        for (int i = 0; i < n - 1; ++i)
            cin >> array[i];
        Solution obj;
        cout << obj.missingNumber(array, n) << "\n";
    }
    return 0;
}
// } Driver Code Ends