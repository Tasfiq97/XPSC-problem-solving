#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        vector<ll> v;
        ll count = 0;
        ll sum = 0;
        bool neg = false;
        for (int i = 0; i < n; i++)
        {
            ll x;
            cin >> x;
            v.push_back(x);
        }
        for (int i = 0; i <= n; i++)
        {
            if (i < n)
                sum += abs(v[i]);
            if (neg)
            {
                if (i == n || v[i] > 0)
                {
                    count++;
                    neg = false;
                }
            }
            else
            {
                if (v[i] < 0)
                {
                    neg = true;
                }
            }
        }
        cout << sum << " " << count << endl;
    }
    return 0;
}