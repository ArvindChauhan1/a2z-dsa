#include <bits/stdc++.h>
using namespace std;

// int removeElement(vector<int> &nums, int val)
// {
//     int n = nums.size();
//     int count = 0;
//     for (int i = 0; i < n; i++)
//     {
//         if (nums[i] == val)
//         {
//             count++;
//             nums[i] = INT_MAX;
//         }
//     }
//     sort(nums.begin(), nums.end());
//     return n - count;
// }

int removeElement(vector<int> &nums, int val)
{
    int n = nums.size();
    int left = 0;
    for (int i = 0; i < n; i++)
    {
        if (nums[i] != val)
        {
            nums[left++] = nums[i];
        }
    }
    return left;
}

int main()
{
    int n;
    cin >> n;

    vector<int>
        arr(n);
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    int val;
    cin >> val;

    int k = removeElement(arr, val);

    for (int i = 0; i < k; i++)
        cout << arr[i] << " ";

    return 0;
}