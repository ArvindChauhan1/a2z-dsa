#include <bits/stdc++.h>
using namespace std;

string addBinary(string a, string b)
{

    // .ensure a is smallest
    if (a.length() > b.length())
        return addBinary(b, a);

    // padding to add before smallest binary
    string padding;
    for (int i = 0; i < b.length() - a.length(); i++)
        padding.push_back('0');

    a = padding + a;

    char carr = '0';
    string res;
    for (int i = a.length() - 1; i >= 0; i--)
    {
        if (a[i] == '1' && b[i] == '1')
        {
            if (carr == '1')
                res.insert(res.begin(), '1'), carr = '1';
            else
                res.insert(res.begin(), '0'), carr = '1';
        }

        else if (a[i] == '0' && b[i] == '0')
        {
            if (carr == '1')
                res.insert(res.begin(), '1'), carr = '0';
            else
                res.insert(res.begin(), '0'), carr = '0';
        }
        else if (a[i] != b[i])
        {
            if (carr == '1')
                res.insert(res.begin(), '0'), carr = '1';
            else
                res.insert(res.begin(), '1'), carr = '0';
        }
    }

    if (carr == '1')
        res.insert(res.begin(), '1');

    return res;
}

int main()
{
    // code here

    string b1, b2;
    cin >> b1 >> b2;

    string res = addBinary(b1, b2);

    cout << "Binary : " << res;

    return 0;
}