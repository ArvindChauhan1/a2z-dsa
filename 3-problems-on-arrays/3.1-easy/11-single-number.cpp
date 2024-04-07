

// Find the number that appears once, and the other numbers twice
// 1. Bruteforce approact (Linear search)
// 2. using hash
// 3. using map

// 4. Optimal Approach(Using XOR)

#include <iostream>
#include <vector>

using namespace std;

class Solution
{
public:
    int singleNumber(vector<int> &nums)
    {
        int res = 0;
        for (int i = 0; i < nums.size(); i++)
        {
            res ^= nums[i];
        }

        return res;
    }
};

int main()
{
    Solution solution;

    vector<int> nums;

    int n;
    cin >> n;

    for (int i = 0; i < n; ++i)
    {
        int num;
        cin >> num;
        nums.push_back(num);
    }

    int result = solution.singleNumber(nums);

    cout << "The single number is: " << result << endl;

    return 0;
}
