#include <bits/stdc++.h>

using namespace std;

void revArr(vector<int> &nums, int start, int end)
{
    while (start < end)
    {
        int temp = nums[start];
        nums[start] = nums[end];
        nums[end] = temp;
        start++;
        end--;
    }
}

void rightRotateMethod2(vector<int> &nums, int k)
{
    int n = nums.size();
    revArr(nums, 0, k - 1);
    revArr(nums, k, n - 1);
    revArr(nums, 0, n - 1);

    cout << endl;
}

// Function to perform right rotation of a vector by k positions
void rightRotateMethod1(vector<int> &nums, int k)
{
    int n = nums.size();
    vector<int> t; // Temporary vector to store rotated elements
    k = k % n;     // Handling case where k is greater than the size of the vector

    // Copy the last k elements of nums to the front of vector t
    for (int i = n - k; i < n; i++)
        t.push_back(nums[i]);

    // Copy the first n-k elements of nums to the end of vector t
    for (int i = 0; i < n - k; i++)
        t.push_back(nums[i]);

    // Copy elements from t back to nums
    for (int i = 0; i < n; i++)
        nums[i] = t[i];
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
    rightRotateMethod2(nums, k);

    // Output the rotated vector
    for (int i = 0; i < nums.size(); i++)
        cout
            << nums[i] << " ";

    return 0;
}
