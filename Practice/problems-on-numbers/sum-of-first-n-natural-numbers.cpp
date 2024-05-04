#include <iostream>
using namespace std;

// Function to calculate the sum of integers from 1 to n using a parameterized approach
// Parameters:
// - i: Current integer being processed
// - sum: Cumulative sum
// Returns:
// - Sum of integers from 1 to n
int parameterizedWaySum(int i, int sum)
{
    // Base case: If i is less than 1, return the accumulated sum
    if (i < 1)
        return sum;

    // Recursive call: Add i to the sum and recursively call parameterizedWaySum for the next integer
    parameterizedWaySum(i - 1, sum + i);
}

// Function to calculate the sum of integers from 1 to n using a functional approach
// Parameters:
// - i: Current integer being processed
// Returns:
// - Sum of integers from 1 to n
int functionalWaySum(int i)
{
    // Base case: If i is 0, return 0
    if (i == 0)
        return 0;

    // Recursive call: Add i to the sum of integers from 1 to (i - 1)
    return i + functionalWaySum(i - 1);
}

int main()
{
    // Input the value of n
    int n;
    cout << "Enter a positive integer n: ";
    cin >> n;

    // Calculate the sum using the formula for the sum of an arithmetic series
    int sum = n * (n + 1) / 2;

    // Output the sum calculated using the formula
    cout << "Sum using formula: " << sum << endl;

    // Output the sum calculated using the parameterized approach
    cout << "Sum using parameterized approach: " << parameterizedWaySum(n, 0) << endl;

    // Output the sum calculated using the functional approach
    cout << "Sum using functional approach: " << functionalWaySum(n) << endl;

    return 0;
}
