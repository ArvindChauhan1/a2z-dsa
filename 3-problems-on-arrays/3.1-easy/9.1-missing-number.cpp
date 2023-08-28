//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function template for C++

class Solution
{
public:
    int missingNumber(vector<int> &nums)
    {
        // 0.linear search
        // 1.using map
        // 2. sum of n natural nums - sum of array => missing number
        //. 3. xor approach xor(xor of n natural nums and xor of elements of array)=> missing number ✅

        int xor1 = 0, xor2 = 0;
        for (int i = 0; i < nums.size(); i++)
        {
            xor1 ^= nums[i]; // XOR of array elements
            xor2 ^= (i + 1); // XOR up to [1...N-1]
        }

        return (xor1 ^ xor2);
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

        vector<int> array(n);
        for (int i = 0; i < n; ++i)
            cin >> array[i];
        Solution obj;
        cout << obj.missingNumber(array) << "\n";
    }
    return 0;
}
// } Driver Code Ends