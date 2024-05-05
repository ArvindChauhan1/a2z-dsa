#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    // Input the number
    int n;
    cin >> n;

    // Initialize the sum of factors to 1
    int sum = 1;

    // Calculate the sum of factors of n
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            // Add the divisor and its corresponding quotient if they are different
            sum += i + (i == (n / i) ? 0 : (n / i));
        }
    }

    // Output whether the number is abundant based on the sum of its factors
    if (sum > n)
    {
        cout << "Since " << sum << " is greater than " << n << ", " << n << " is an abundant number." << endl;
    }
    else
    {
        cout << "Since " << sum << " is not greater than " << n << ", " << n << " is not an abundant number." << endl;
    }

    return 0;
}
