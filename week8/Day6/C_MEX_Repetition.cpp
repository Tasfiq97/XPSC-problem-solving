#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
    {

        ll n, k, b, m, l;
        cin >> n >> k;
        vector<ll> v, t;
        for (ll i = 0; i < n; i++)
        {
            cin >> b;
            v.push_back(b);
        }
        t = v;
        sort(t.begin(), t.end());
        m = n;
        for (ll i = 0; i < n; i++)
        {
            if (t[i] != i)
            {
                m = i;
                break;
            }
        }
        ll oldValue;
        for (ll i = 0; i < n; i++)
        {
            oldValue = v[i];
            v[i] = m;
            m = oldValue;
        }
        v.push_back(m);

        l = (k - 1) % (n + 1);
        for (ll i = (n + 1 - l); i < (n + 1); i++)
        {
            cout << v[i] << " ";
        }
        for (ll i = 0; i < (n - l); i++)
        {
            cout << v[i] << " ";
        }
        cout << endl;
    }
    return 0;
}