#include <bits/stdc++.h>
#include <vector>

using namespace std;

// 2. Optimal Approach (Using 2 pointers)

int longestSubarrayWithSumK(vector<int> a, long long k)
{
    long long sum = a[0]; // Initialize the sum with the first element of the array
    int left = 0, right = 0, maxLen = 0;
    int n = a.size();

    // Iterate through the array using two pointers technique
    while (right < n)
    {
        // Move the left pointer to shrink the window if the sum is greater than k
        while (left <= right && sum > k)
        {
            sum -= a[left]; // Subtract the value at left pointer from sum
            left++;         // Move the left pointer to the right
        }

        // Check if the current subarray sum equals k
        if (sum == k)
        {
            // Update maxLen if the length of the current subarray is greater
            maxLen = max(maxLen, right - left + 1);
        }

        right++; // Move the right pointer to expand the window
        if (right < n)
            sum += a[right]; // Add the value at right pointer to sum if right pointer is within the bounds of the array
    }

    return maxLen;
}

int main()
{
    // Test your function here
    vector<int> a;
    long long k;

    int n;
    cin >> n;
    cin >> k;
    while (n--)
    {
        int t;
        cin >> t;
        a.push_back(t);
    }

    int result = longestSubarrayWithSumK(a, k);
    cout << "Length of longest subarray with sum " << k << ": " << result << endl;

    return 0;
}