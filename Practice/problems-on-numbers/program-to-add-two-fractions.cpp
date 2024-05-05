#include <bits/stdc++.h>

using namespace std;

int gcd(int a, int b)
{
    if (a < b)
        swap(a, b);
    if (b == 0)
        return a;
    return gcd(b, a % b);
}

void simple(int &n, int &d)
{
    int g = gcd(n, d);

    n /= g;
    d /= g;
}

int main()
{
    int n1, d1, n2, d2;
    int n3, d3;

    cin >> n1 >> d1;
    cin >> n2 >> d2;

    d3 = (d1 * d2) / gcd(d1, d2);

    n3 = (n1 * (d3 / d1)) + (n2 * (d3 / d2));

    cout << n1 << "/" << d1 << " + " << n2 << "/" << d2 << " = " << n3 << "/"
         << d3;

    return 0;
}