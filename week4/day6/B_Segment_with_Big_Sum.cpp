#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll n, k;
    cin >> n >> k;
    vector<ll> v(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    int l = 0, r = 0;
    int ans = INT_MAX;
    ll sum = 0;
    while (r < n)
    {
        sum += v[r];
        while (sum >= k)
        {
            ans = min(ans, r - l + 1);
            sum -= v[l];
            l++;
        }

        r++;
    }
    if (ans == INT_MAX)
        cout << -1 << endl;
    else
        cout << ans << endl;
    return 0;
}