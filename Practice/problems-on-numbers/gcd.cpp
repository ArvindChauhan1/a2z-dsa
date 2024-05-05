#include <bits/stdc++.h>

using namespace std;

int gcd(int a, int b)
{

    for (int i = min(a, b); i > 0; i--)
    {
        if (a % i == 0 && b % i == 0)
            return i;
    }

    return 1;
}

int euclideanAlgorithm(int a, int b)
{
    if (a < b)
        swap(a, b);

    // Iterate until b becomes 0
    // while (b != 0)
    // {
    //     int temp = a % b;
    //     a = b;
    //     b = temp;
    // }

    if (b == 0)
        return a;

    euclideanAlgorithm(b, a % b);
}

int main()
{
    int a, b;
    cin >> a >> b;

    cout << "gcd = " << gcd(a, b);
    cout << "\neuclideanAlgorithm gcd = " << euclideanAlgorithm(a, b);

    return 0;
}