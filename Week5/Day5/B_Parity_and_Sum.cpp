#include <bits/stdc++.h>
#define ll long long int
using namespace std;
void solve()
{
    ll n;
    cin >> n;

    ll v[n];
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    vector<ll> odd;
    vector<ll> even;
    for (auto i : v)
    {
        if (i % 2 == 0)
            even.push_back(i);
        else
            odd.push_back(i);
    }

    if (odd.size() == 0 || even.size() == 0)
    {
        cout << "0" << endl;
        return;
    }

    sort(odd.begin(), odd.end());
    sort(even.begin(), even.end());

    ll maximum = odd.back();
    ll ans = even.size();

    for (auto i : even)
    {
        if (i > maximum)
        {
            ans++;
            break;
        }
        maximum += i;
    }

    cout << ans << endl;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}