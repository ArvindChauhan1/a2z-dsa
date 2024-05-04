#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    cout << 0 << " ";
    if (n == 0)
        return 0;

    cout << 1 << " ";
    if (n == 1)
        return 0;

    int last = 1, s_last = 0;
    for (int i = 2; i < n; i++)
    {
        int curr = last + s_last;
        cout << curr << " ";
        s_last = last;
        last = curr;
    }

    return 0;
}