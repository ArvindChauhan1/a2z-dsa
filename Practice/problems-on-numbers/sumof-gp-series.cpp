#include <bits/stdc++.h>

using namespace std;

int main()
{
    double a, r;
    cin >> a >> r;
    int n;
    cin >> n;

    double res = (a * (pow(r, n) - 1)) / (r - 1);
    cout << res;

    return 0;
}