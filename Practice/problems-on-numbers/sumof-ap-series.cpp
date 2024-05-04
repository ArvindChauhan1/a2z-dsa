#include <bits/stdc++.h>

using namespace std;

int main()
{
    double a, d;
    cin >> a >> d;
    int n;
    cin >> n;

    double res = (n / 2.0) * (2.0 * a + (n - 1) * d);
    cout << res;

    return 0;
}