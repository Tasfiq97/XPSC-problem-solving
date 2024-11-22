#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll n, k;
    cin >> n >> k;
    vector<ll> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    int l = 0, r = 0;
    ll sum = 0, ans = 0;
    while (r < n)
    {
        sum += v[r];

        while (sum >= k)
        {
            ans += (n - r);
            sum -= v[l];
            l++;
        }

        r++;
    }
    cout << ans << endl;
    return 0;
}