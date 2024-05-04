#include <iostream>
#include <cmath>

using namespace std;

bool isArmstrong(int n)
{
    int t = n;
    int digits = to_string(n).length();
    int sum = 0;

    while (n != 0)
    {
        // Potential floating-point issue:
        // The pow function returns a floating-point value, which may introduce precision errors
        // when used with integer arguments. This can lead to incorrect results when summing up
        // the powers of digits.

        // Possible solutions:
        // 1. Implement a custom integer exponentiation function tailored for this specific case.
        // 2. Round the result of pow to the nearest integer to mitigate precision issues.

        sum += round(pow(n % 10, digits)); // Solution 2: Round the result to the nearest integer
        n /= 10;
    }
    return (t == sum);
}

int main()
{
    int n;
    cin >> n;

    cout << n << " is " << (isArmstrong(n) ? "an armstrong Number" : "not an armstrong Number");

    return 0;
}
