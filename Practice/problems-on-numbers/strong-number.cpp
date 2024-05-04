#include <bits/stdc++.h>

using namespace std;

#define M 1000000007

int recursiveFactorial(int n)
{
    if (n == 1)
        return 1;

    return (n * recursiveFactorial(n - 1)) % M;
}

bool isStrong(int n)
{
    int dup = n;
    int sum = 0;
    while (n)
    {
        sum += recursiveFactorial(n % 10);
        n /= 10;
    }

    return dup == sum;
}

int main()
{
    int n;
    cin >> n;

    cout << n << " is " << (isStrong(n) ? "" : "not ") << "a strong number";

    return 0;
}