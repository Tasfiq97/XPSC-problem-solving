#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll n, q;
        cin >> n >> q;

        ll v[n];
        for (ll i = 0; i < n; i++)
            cin >> v[i];

        ll v2[q];
        for (ll i = 0; i < q; i++)
            cin >> v2[i];

        set<ll> s;

        for (ll i = 0; i < q; i++)
        {
            if (s.count(v2[i]))
                continue;
            s.insert(v2[i]);
            for (ll j = 0; j < n; j++)
            {
                if (v[j] % (1 << v2[i]) == 0)
                    v[j] += (1 << (v2[i] - 1));
            }
        }

        for (auto i : v)
            cout << i << " ";
        cout << endl;
    }
    return 0;
}