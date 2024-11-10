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
        map<ll, ll> mp;
        vector<ll> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
            mp[v[i]]++;
        }
        sort(v.begin(), v.end());
        ll ans = 0;
        for (int i = 0; i < n; i++)
        {
            ll val = v[i];
            if (mp[v[i]] != 0)
            {
                ans++;
                while (mp[val] > 0)
                {
                    mp[val]--;
                    val++;
                }
            }
        }
        cout << ans << '\n';
    }
    return 0;
}