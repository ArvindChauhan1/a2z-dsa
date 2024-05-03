// Problem Statement: Given an array, we have to find the sum of all the elements in the array.

#include <bits/stdc++.h>

using namespace std;

long sumofarray(int a[], int n)
{

    int sum = 0;

    for (int i = 0; i < n; i++)
        sum += a[i];

    return sum;
}

int main()
{
    int n;
    cin >> n;

    int arr[n];

    for (int i = 0; i < n; i++)
        cin >> arr[i];

    cout << "sum = " << sumofarray(arr, n);

    return 0;
}