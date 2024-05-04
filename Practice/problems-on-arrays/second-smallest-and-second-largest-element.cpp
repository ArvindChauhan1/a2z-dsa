#include <bits/stdc++.h>

using namespace std;

int main()
{

    int n;
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int mn = INT_MAX, mx = INT_MIN;
    int sc_mn = INT_MAX, sc_mx = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        mn = min(mn, arr[i]);
        mx = max(mx, arr[i]);
    }

    for (int i = 0; i < n; i++)
    {
        if (sc_mn > arr[i] && arr[i] != mn)
            sc_mn = arr[i];
        if (sc_mx < arr[i] && arr[i] != mx)
            sc_mx = arr[i];
    }

    cout << sc_mx;
    cout << sc_mn;

    return 0;
}