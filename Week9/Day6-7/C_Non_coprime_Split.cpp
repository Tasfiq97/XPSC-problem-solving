#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll findSmallestPrimeFactor(ll n)
{
    while (n % 2 == 0)
    {
        return 2;
        n = n / 2;
    }
    for (ll i = 3; i <= sqrt(n); i = i + 2)
    {
        while (n % i == 0)
        {
            return i;
            n = n / i;
        }
    }
    if (n > 2)
        return n;
}
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll l, r;
        cin >> l >> r;
        if (r <= 3)
        {
            cout << -1 << endl;
        }
        else
        {
            if (l < r)
            {
                if (r % 2 != 0)
                {
                    r--;
                }
                cout << 2 << " " << r - 2 << endl;
            }
            else
            {
                ll p = findSmallestPrimeFactor(l);
                if (p == l)
                    cout << -1 << endl;
                else
                    cout << p << " " << l - p << endl;
            }
        }
    }
    return 0;
}