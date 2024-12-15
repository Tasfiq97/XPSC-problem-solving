#include <bits/stdc++.h>

using namespace std;

#define ll long long

string decToBinary(ll n)
{
    // Size of an integer is assumed to be 32 bits
    string ans;
    for (ll i = 64; i >= 0; i--)
    {
        ll k = n >> i;
        if (k & 1)
            ans += '1';
        else
            ans += '0';
    }
    return ans;
}

void solve()
{
    ll n;
    cin >> n;
    vector<ll> v(n);
    set<ll> s;
    for (ll i = 0; i < n; i++)
        cin >> v[i];
    vector<ll> m(64);
    int g = 0;
    for (ll i = 0; i < n; i++)
    {
        string s = decToBinary(v[i]);
        for (ll j = 0; j < 64; j++)
        {
            if (s[j] != '0')
                m[j]++;
        }
    }
    for (ll i = 0; i < 64; i++)
        g = __gcd((ll)g, m[i]);
    for (int i = 1; i <= n; i++)
    {
        if (g % i == 0)
            cout << i << ' ';
    }
    cout << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cout << fixed << setprecision(6) << endl;

    int tt;
    cin >> tt;
    while (tt--)
        solve();
    return 0;
}