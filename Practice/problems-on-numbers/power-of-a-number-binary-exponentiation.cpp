#include <bits/stdc++.h>

using namespace std;

#define M 1000000007

int myPow(int x, int n)
{
    if (n == 0)
        return 1;

    long long res = myPow(x, n / 2);
    res = (res * res) % M;

    if (n & 1)
        return (x * res) % M;
    else
        return res;
}

int main()
{
    int x, n;

    cin >> x >> n;

    cout << x << " power " << n << " = " << myPow(x, n);

    return 0;
}