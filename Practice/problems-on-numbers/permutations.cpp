#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, r;
    cin >> n >> r;
    int ans = 1;

    for (int i = 10; i > n - r; i--)
        ans *= i;

    cout << ans;

    return 0;
}