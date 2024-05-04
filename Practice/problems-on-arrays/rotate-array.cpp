#include <iostream>
#include <vector>

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

// Function to perform right rotation of a vector by k positions using a different method
void leftRotateMethod2(vector<int> &nums, int k)
{
    int n = nums.size();

    if (n == 1 || n == 0)
        return;

    k = k % n;

    // Reverse the first k elements
    revArr(nums, 0, k - 1);
    // Reverse the remaining elements
    revArr(nums, k, n - 1);
    // Reverse the entire array
    revArr(nums, 0, n - 1);
}

// Function to perform right rotation of a vector by k positions
void leftRotateMethod1(vector<int> &nums, int k)
{
    int n = nums.size();

    if (n == 1 || n == 0)
        return;
    k = k % n; // Handling case where k is greater than the size of the vector

    vector<int> t; // Temporary vector to store rotated elements

    // Copy the last k elements of nums to the front of vector t
    for (int i = n - k - 1; i < n; i++)
        t.push_back(nums[i]);

    // Copy the first n-k elements of nums to the end of vector t
    for (int i = 0; i < k; i++)
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

    // Call leftRotateMethod2 function to perform right rotation
    leftRotateMethod1(nums, k);

    // Output the rotated vector
    for (int i = 0; i < nums.size(); i++)
        cout << nums[i] << " ";

    return 0;
}
