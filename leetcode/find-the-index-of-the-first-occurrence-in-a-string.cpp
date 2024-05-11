#include <bits/stdc++.h>
using namespace std;

// Given two strings needle and haystack, return the index of the first occurrence of needle in haystack, or -1 if needle is not part of haystack.

vector<int> computeLps(string s)
{
    int n = s.length();
    vector<int> lps(n); // Create an empty vector to store the longest proper prefix which is also a suffix

    lps[0] = 0; // Initialize the first value of lps to 0 as the first element has no proper prefix

    int len = 0; // Length of the previous longest proper prefix suffix
    int i = 1;   // Start from the second element

    while (i < n)
    {
        if (s[i] == s[len])
        {
            len++;        // Increment length as there is a match
            lps[i] = len; // Update lps value for current index
            i++;          // Move to the next index
        }
        else
        {
            // If there is a mismatch and len is not 0, update len to the previous lps value
            if (len != 0)
            {
                len = lps[len - 1];
            }
            else
            {
                lps[i] = 0; // If len is 0, set lps value for current index to 0
                i++;        // Move to the next index
            }
        }
    }
    return lps; // Return the computed lps vector
}

// Function to find the index of the first occurrence of the needle string in the haystack string
int strStr(const string &haystack, const string &needle)
{
    if (needle.empty())
        return 0; // Return 0 if the needle string is empty

    vector<int> lps = computeLps(needle); // Compute the LPS array for the needle string
    int n = haystack.length();
    int i = 0, j = 0; // Initialize pointers for haystack and needle

    while (i < n)
    {
        if (haystack[i] == needle[j])
        {        // If characters match
            i++; // Move to the next character in haystack
            j++; // Move to the next character in needle
        }
        else
        {
            if (j != 0)
                j = lps[j - 1]; // Update j using the LPS array to handle mismatches efficiently
            else
                i++; // If j is already 0, move to the next character in haystack
        }

        if (j == needle.length())
            return i - j; // Return the starting index of the found substring
    }

    return -1; // Return -1 if needle is not found in haystack
}

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