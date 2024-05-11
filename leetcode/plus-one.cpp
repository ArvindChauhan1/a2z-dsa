#include <bits/stdc++.h>

using namespace std;

vector<int> plusOne(vector<int> &digits)
{
    int carr = 1;              // Initialize carry to 1 for adding 1 to the number
    int i = digits.size() - 1; // Start from the least significant digit
    vector<int> res;           // Initialize an empty vector to store the result

    // Traverse the digits array from right to left
    while (i >= 0)
    {
        int t = digits[i] + carr; // Add the current digit with the carry

        // If the sum is greater than 9, there's a carry
        if (t > 9)
        {
            carr = t / 10; // Update carry by dividing the sum by 10
            t = t % 10;    // Get the remainder as the new digit
        }
        else
        {
            carr = 0; // Reset carry if no carry is needed
        }

        // Insert the new digit at the beginning of the result vector
        res.insert(res.begin(), t);
        i--; // Move to the next digit
    }

    // If there's a carry left after processing all digits, insert it at the beginning
    if (carr != 0)
        res.insert(res.begin(), carr);

    return res; // Return the resulting vector representing the incremented number
}

int main()
{
    int n;
    cin >> n;

    vector<int> input(n);
    for (int i = 0; i < n; ++i)
        cin >> input[i];

    // Output the result

    vector<int> result = plusOne(input);

    cout << "Result: ";
    for (int num : result)
        cout << num << " ";

    return 0;
}