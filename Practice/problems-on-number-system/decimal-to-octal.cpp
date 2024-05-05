#include <bits/stdc++.h>

using namespace std;

string decToBin(int n)
{
    if (n == 0)
        return " ";
        
    string res = "";

    while (n)
    {
        res += (n % 2) + '0';
        n /= 2;
    }

    reverse(res.begin(), res.end());
    return res;
}

int main()
{
    int n;
    cin >> n;
    string bin = decToBin(n);
    cout << "binary of " << n << " = " + bin;
    return 0;
}