#include <bits/stdc++.h>
using namespace std;

int romanToInt(string s)
{
    transform(s.begin(), s.end(), s.begin(), ::toupper);

    map<char, int> rmval = {
        {'I', 1},
        {'V', 5},
        {'X', 10},
        {'L', 50},
        {'C', 100},
        {'D', 500},
        {'M', 1000}};

    int sum = 0;

    for (int i = s.length() - 1; i >= 0; i--)
    {
        if (i != s.length() - 1 && rmval[s[i]] < rmval[s[i + 1]])
            sum -= rmval[s[i]];
        else
            sum += rmval[s[i]];
    }

    return sum;
}

int main()
{
    string s;
    cin >> s;

    int n = romanToInt(s);
    cout << n;

    return 0;
}