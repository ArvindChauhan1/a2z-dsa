#include <bits/stdc++.h>

using namespace std;

void printPrimeFactors(int n)
{
    cout << "prime factors ";

    for (int i = 2; i * i < n, n > 1; i++)
    {
        if (n % i == 0)
        {

            while (n % i == 0)
            {
                cout << i << " ";
                n /= i;
            }
        }
    }
}

int main()
{
    int n;
    cin >> n;

    printPrimeFactors(n);
    return 0;
}