#include <bits/stdc++.h>
using namespace std;

// Function to reverse an array from index 'start' to index 'end'
void revArr(vector<int> &nums, int start, int end)
{
    while (start < end)
    {
        // Swap elements at indices 'start' and 'end'
        int temp = nums[start];
        nums[start] = nums[end];
        nums[end] = temp;
        // Move to the next pair of elements
        start++;
        end--;
    }
}

void rotateRight(vector<int> &nums, int k)
{
    int n = nums.size();

    if (n == 1 || n == 0)
        return;

    k = k % n;

    revArr(nums, 0, n - 1);
    revArr(nums, 0, k - 1);
    revArr(nums, k, n - 1);
}
int main()
{
    int n;
    cin >> n;

    vector<int> nums(n); // Vector to store input elements

    // Input elements into nums vector
    for (int i = 0; i < n; i++)
        cin >> nums[i];

    int k;
    cin >> k; // Input the value of k for right rotation

    // Call rightRotateMethod1 function to perform right rotation
    rotateRight(nums, k);

    // Output the rotated vector
    for (int i = 0; i < nums.size(); i++)
        cout
            << nums[i] << " ";

    return 0;
}
