#include <bits/stdc++.h>
using namespace std;

// Given two strings needle and haystack, return the index of the first occurrence of needle in haystack, or -1 if needle is not part of haystack.

int strStr(const std::string &haystack, const std::string &needle)
{
    int m = haystack.length();
    int n = needle.length();

    if (n == 0)
        return 0; // Empty needle, return 0

    for (int i = 0; i <= m - n; ++i)
    { // Loop through haystack
        int j = 0;
        while (j < n && haystack[i + j] == needle[j])
        { // Check for match
            ++j;
        }
        if (j == n)
            return i; // If needle is found, return the starting index
    }

    return -1; // Needle not found
}

// int strStr(string haystack, string needle)
// {

// }

int main()
{
    // code here

    string heystack;
    cin >> heystack;

    string needle;
    cin >> needle;

    int k = strStr(heystack, needle);
    cout << k;

    return 0;
}