// Problem Statement: Rearrange the array such that the first half is arranged in increasing order, and the second half is arranged in decreasing order

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    sort(arr, arr + n);

    int t[n];
    for (int i = 0; i < n / 2; i++)
        t[i] = arr[i];

    for (int i = n / 2; i < n; i++)
        t[i] = arr[n + n / 2 - i - 1];

    for (int i = 0; i < n; i++)
        cout << t[i] << " ";

    return 0;
}