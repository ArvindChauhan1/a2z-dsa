// Problem Statement: Given a range of numbers, find all the palindrome numbers in the range.

#include <bits/stdc++.h>

using namespace std;

int rev(int n)
{

    int t = 0;
    while (n > 0)
    {
        t = t * 10 + n % 10;
        n = n / 10;
    }

    return t;
}

int main()
{
    int min, max;

    cin >> min >> max;

    for (int i = min; i <= max; i++)
    {
        if (i == rev(i))
            cout << i << " ";
    }

    return 0;
}