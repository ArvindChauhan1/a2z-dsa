#include <bits/stdc++.h>
using namespace std;

int lengthOfLastWord(string s)
{
    int length = 0;
    bool foundNonSpace = false;

    for (int i = s.length() - 1; i >= 0; i--)
    {
        if (s[i] != ' ')
        {
            foundNonSpace = true;
            length++;
        }
        else if (foundNonSpace)
        {
            break; // Break if we have found the last word
        }
    }

    return length;
}

int main()
{
    // code here
    string s;
    getline(cin, s);
    int res = lengthOfLastWord(s);
    cout << res;
    return 0;
}