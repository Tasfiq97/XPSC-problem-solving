#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, k;
        cin >> a >> b >> k;
        while (k > 0 && a > 1)
        {
            int remainder = b - a % b;

            if (remainder >= k)
            {
                a += k;
                k = 0;
            }
            else
            {
                a += remainder;
                k -= remainder;
            }
            while (a % b == 0)
                a /= b;
        }
        if (k > 0)
        {
            k %= b - 1;
            a += k;
        }
        cout << a << endl;
    }
    return 0;
}