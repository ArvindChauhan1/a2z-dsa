#include <bits/stdc++.h>

using namespace std;

#define M 1000000007

int iterativeFactorial(int n)
{
    long long fact = 1;
    while (n > 0)
    {
        fact = (fact * n) % M;
        n--;
    }

    return fact;
}

int recursiveFactorial(int n)
{
    if (n == 1)
        return 1;

    return (n * recursiveFactorial(n - 1)) % M;
}

int main()
{

    int n;
    cin >> n;

    cout << "Iterative Factorial = " << iterativeFactorial(n) << "\n";
    cout << "Recursive Factorial = " << recursiveFactorial(n);

    return 0;
}