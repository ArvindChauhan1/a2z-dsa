#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    getline(cin, s); // Use getline to read the entire line including spaces

    int vow = 0, con = 0, spc = 0;

    for (char c : s)
    {
        char lowerC = tolower(c);
        if (isalpha(c))
        {
            if (lowerC == 'a' || lowerC == 'e' || lowerC == 'i' || lowerC == 'o' || lowerC == 'u')
            {
                vow++;
            }
            else
                con++;
        }
        if (c == ' ')
            spc++
    }

    cout << "Vowels: " << vow << endl;
    cout << "Consonants: " << con << endl;
    cout << "Spaces: " << spc << endl;

    return 0;
}