#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        ll m = (n * (n - 1)) / 2;
        vector<ll> v1(n);
        vector<ll> v2(m);
        for (ll i = 0; i < m; i++)
        {
            cin >> v2[i];
        }
        sort(v2.begin(), v2.end());
        ll x = 1, index = 0;
        ll minimum = n - x;
        while (n - x > 0)
        {
            v1[index++] = v2[minimum - 1];
            x++;
            minimum += n - x;
        }
        v1[n - 1] = 1e9;
        for (ll val : v1)
        {
            cout << val << " ";
        }
        cout << endl;
    }
    return 0;
}