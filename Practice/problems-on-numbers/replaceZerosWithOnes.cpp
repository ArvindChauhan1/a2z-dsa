#include <bits/stdc++.h>

using namespace std;

int replaceZerosWithOnes(int n)
{
    int res = 0, t = 1;
    while (n > 0)
    {
        int d = n % 10;

        if (d == 0)
            res = res + 1 * t;
        else
            res = res + t * d;

        t *= 10;
        n /= 10;
    }

    return res;
}

int main()
{
    int n;
    cin >> n;

    string s = to_string(n);

    cout << "without string" << replaceZerosWithOnes(n);
    // cout << s;
    for (int i = 0; i < s.length(); i++)
        if (s[i] == '0')
            s[i] = '1';

    n = stoi(s);
    cout << "\nstring method - " << n;
    return 0;
}