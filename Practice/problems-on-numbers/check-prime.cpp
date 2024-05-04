#include <bits/stdc++.h>

using namespace std;

bool isPrime(int n)
{
    if (n == 1 || n == 0)
        return false;

    for (int i = 2; i <= sqrt(n); i++)
        if (n % i == 0)
            return false;

    return true;
}

int main()
{
    int n;

    cin >> n;

    cout << n << " is " << (isPrime(n) ? "prime" : "not prime");

    return 0;
}