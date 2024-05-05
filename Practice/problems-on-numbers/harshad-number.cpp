#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;

    int dup = n;
    int q = 0;

    while (n != 0)
    {
        q += n % 10;
        n /= 10;
    }

    cout << dup << " is " << (dup % q == 0 ? "" : "not ") << "a Harshad number";

    return 0;
}