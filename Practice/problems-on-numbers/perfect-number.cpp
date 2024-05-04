// Problem Statement: Perfect Number. Write a program to find whether a number is a perfect number or not.

// A perfect number is defined as a number that is the sum of its proper divisors ( all its positive divisors excluding itself).

#include <bits/stdc++.h>

using namespace std;

bool isPerfect(int n)
{
    int sum = 0, t = n;
    for (int i = 1; i <= n / 2; i++)
        if (n % i == 0)
            sum += i;

    return t == sum;
}

int main()
{
    int n;
    cin >> n;

    cout << n << " is " << (isPerfect(n) ? " a Perfect Number" : "not a Perfect Number");

    // if (isPerfect(n))
    //     cout << n << "is a Perfect Number";
    // else
    //     cout << n << "is not a Perfect Number";

    return 0;
}