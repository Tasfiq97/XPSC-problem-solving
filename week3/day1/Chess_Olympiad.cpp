#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b, c;
    cin >> a >> b >> c;

    double points1 = a * 1.0 + b * 0.5;
    double points = c * 1.0 + b * 0.5;
    int r = 4 - (a + b + c);

    points1 += r * 1.0;

    if (points1 > points)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
}