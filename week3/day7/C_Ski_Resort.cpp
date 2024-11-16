#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        ll n, k, q;
        cin >> n >> k >> q;

        vector<ll> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }

        ll ans = 0;

        ll c = 0;
        for (int i = 0; i < n; i++)
        {
            if (v[i] <= q)
            {
                c++;
                if (i == n - 1 || v[i + 1] > q)
                {
                    if (c >= k)
                    {
                        ll x = c - k + 1LL;
                        ll sum = (x * (x + 1LL)) / 2LL;
                        ans += sum;
                    }
                    c = 0;
                }
            }
        }

        cout << ans << endl;
    }
    return 0;
}