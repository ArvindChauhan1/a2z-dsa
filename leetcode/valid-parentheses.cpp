#include <bits/stdc++.h>
using namespace std;

bool isValid(string s)
{
    if (s.length() == 0)
        return true;
    if (s.length() == 1)
        return false;

    stack<char> st;
    unordered_map<char, char> mp = {
        {'(', ')'},
        {'{', '}'},
        {'[', ']'}};

    for (char ch : s)
    {
        if (ch == '(' || ch == '{' || ch == '[')
            st.push(ch);
        else
        {
            if (st.empty() || mp[st.top()] != ch)
                return false;

            st.pop();
        }
    }

    if (!st.empty())
        return false;

    return true;
}

int main()
{
    // code here

    string s;
    cin >> s;

    cout << (isValid(s) ? "Valid" : "Invalid");

    return 0;
}