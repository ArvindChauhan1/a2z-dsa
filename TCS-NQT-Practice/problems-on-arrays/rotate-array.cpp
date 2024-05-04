#include <bits/stdc++.h>

using namespace std;

void rightRotate(vector<int> &nums, int k)
{
    int n = nums.size();
    vector<int> t;

    for (int i = n - k - 1; i < n; i++)
        t.push_back(nums[i]);

    for (int i = 0; i < k; i++)
        t.push_back(nums[i]);

    for (int i = 0; i < n; i++)
        nums[i] = t[i];
}

int main()
{
    int n;
    cin >> n;

    vector<int> nums(n);

    for (int i = 0; i < n; i++)
        cin >> nums[i];

    // rightRotate(nums, 2)

    int k;
    cin >> k;
    rightRotate(nums, k);

    for (int i = 0; i < nums.size(); i++)
        cout
            << nums[i] << " ";

    return 0;
}