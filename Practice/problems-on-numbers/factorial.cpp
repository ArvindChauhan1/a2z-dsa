#include <bits/stdc++.h>

using namespace std;

int iterativeFactorial(int n)
{
    long long fact = 1;
    while (n > 0)
    {
        fact *= n;
        n--;
    }

    return fact;
}

int recursiveFactorial(int n)
{
    if (n == 1)
        return 1;

    return n * recursiveFactorial(n - 1);
}

int main()
{

    int n;
    cin >> n;

    cout << "Iterative Factorial = " << iterativeFactorial(n) << "\n";
    cout << "Recursive Factorial = " << recursiveFactorial(n);

    return 0;
}