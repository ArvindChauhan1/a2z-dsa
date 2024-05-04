// Problem Statement: Given a number, check if it is automorphic or not. A number is called an Automorphic number if and only if its square ends in the same digits as the number itself.

#include <bits/stdc++.h>
using namespace std;

bool isAutomorphic(int n)
{
    long sq = n * n;

    while (n)
    {
        if (sq % 10 != n % 10)
            return false;

        sq /= 10;
        n /= 10;
    }

    return true;
}

int main()
{
    int n;
    cin >> n;

    cout << n << " is " << (isAutomorphic(n) ? "" : "not ") << "a strong number";

    return 0;
}