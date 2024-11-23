#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n, k;
        cin >> n >> k;
        vector<ll> v1(n);
        vector<ll> v2(n);
        for (ll i = 0; i < n; i++)
        {
            cin >> v1[i];
        }
        for (ll i = 0; i < n; i++)
        {
            cin >> v2[i];
        }
        ll curr = v1[0];
        ll l = 0, r = 1;
        ll ans = 0;
        if (curr <= k)
            ans = 1;
        while (r < n)
        {
            if (v2[r - 1] % v2[r] == 0)
                curr += v1[r];
            else
            {
                curr = v1[r];
                l = r;
            }
            while (curr > k)
            {
                curr -= v1[l];
                l++;
            }
            ans = max(ans, r - l + 1);
            r++;
        }
        cout << ans << endl;
    }

    return 0;
}