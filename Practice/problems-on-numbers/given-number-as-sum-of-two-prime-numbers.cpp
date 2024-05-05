#include <iostream>
#include <utility> // for pair

using namespace std;

// Function to check if a given number is prime
bool isPrime(int n)
{
    if (n <= 1)
        return false;
    if (n <= 3)
        return true;

    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
            return false;
    }
    return true;
}

// Function to find the pair of prime numbers that sum up to n
pair<int, int> sumofTwoPrimeNumbers(int n)
{
    pair<int, int> result = make_pair(-1, -1);

    // Iterate through numbers from 2 to sqrt(n)
    for (int i = 2; i <= n / 2; i++)
    {
        // Check if both i and (n - i) are primes
        if (isPrime(i) && isPrime(n - i))
        {
            result.first = i;
            result.second = n - i;
            return result;
        }
    }
    return result; // Return (-1, -1) if no such pair found
}

int main()
{
    int n;
    cin >> n;

    pair<int, int> primesPair = sumofTwoPrimeNumbers(n);

    // Output the pair of prime numbers
    cout << "Pair of prime numbers that sum up to " << n << ": ";
    if (primesPair.first == -1 && primesPair.second == -1)
    {
        cout << "No such pair exists";
    }
    else
    {
        cout << primesPair.first << " " << primesPair.second;
    }

    return 0;
}
