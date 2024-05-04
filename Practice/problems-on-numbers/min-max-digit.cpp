#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;

    cin >> n;

    int minn = INT_MAX, maxn = INT_MIN;
    while (n != 0)
    {
        minn = min(n % 10, minn);
        maxn = max(n % 10, maxn);
        n /= 10;
    }

    cout << "min = " << minn << endl;
    cout << "max = " << maxn << endl;

    return 0;
}