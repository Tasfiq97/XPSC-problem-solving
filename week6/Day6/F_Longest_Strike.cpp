#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n, k;
        cin >> n >> k;
        map<ll, ll> mp;
        ll temp;
        ll l = -1, count = 0, mx = 0, final = -1;
        for (ll i = 0; i < n; i++)
        {
            cin >> temp;
            mp[temp]++;
        }
        for (auto x : mp)
        {
            if (x.second >= k)
            {
                if (count == 0)
                {
                    l = x.first;
                    count++;
                }
                else
                {
                    if (l + count == x.first)
                    {
                        count++;
                    }
                    else
                    {
                        if (count > mx)
                        {
                            mx = count;
                            final = l;
                        }
                        count = 1;
                        l = x.first;
                    }
                }
            }
            else
            {
                if (count > mx)
                {
                    mx = count;
                    final = l;
                }
            }
        }
        if (count > mx)
        {
            mx = count;
            final = l;
        }
        if (final == -1)
        {
            cout << -1 << endl;
        }
        else
        {
            cout << final << " " << final + mx - 1 << endl;
        }
    }
    return 0;
}