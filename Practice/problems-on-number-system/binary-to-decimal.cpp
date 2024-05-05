#include <bits/stdc++.h>

using namespace std;

int binaryToDecimal(string s)
{

    int t = 1, dec = 0;
    for (int i = s.length() - 1; i >= 0; i--)
    {
        if (s[i] == '1')
        {
            dec = dec + t;
        }
        t *= 2;
    }
    return dec;
}

int main()
{

    string s;
    cin >> s;

    int dec = binaryToDecimal(s);
    cout << "decimal of " << s << " = " << dec;

    return 0;
}