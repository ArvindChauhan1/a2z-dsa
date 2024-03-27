#include <iostream>
#include <vector>

using namespace std;

class Solution
{
public:
    int findMaxConsecutiveOnes(vector<int> &nums)
    {
        int maxCount = 0, count = 0;

        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[i] == 1)
                count++;
            else
                count = 0;

            maxCount = max(count, maxCount);
        }

        return maxCount;
    }
};

int main()
{
    Solution solution;
    vector<int> nums;
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;
    cout << "Enter the elements (0 or 1): ";
    for (int i = 0; i < n; ++i)
    {
        int num;
        cin >> num;
        nums.push_back(num);
    }

    int maxConsecutiveOnes = solution.findMaxConsecutiveOnes(nums);
    cout << "Maximum Consecutive Ones: " << maxConsecutiveOnes << endl;

    return 0;
}
