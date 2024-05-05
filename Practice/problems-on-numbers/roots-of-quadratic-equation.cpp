#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a, b, c;

    cin >> a >> b >> c;

    int d = (b * b) - (4 * a * c);
    double sqval = sqrt(abs(d));

    cout << "roots = ";

    if (d == 0)
    {
        cout
            << (double)(-b / 2 * a) << " " << (double)(-b / 2 * a) << "\n";
    }
    else if (d > 0)
    {
        cout
            << (double)((-b + sqval) / 2 * a) << " " << (double)((-b - sqval) / 2 * a) << "\n";
    }
    else
    {
        cout << (-b / 2.0 * a) << "+i" << sqval << " ";
        cout << (-b / 2.0 * a) << "-i" << sqval;
    }
    return 0;
}