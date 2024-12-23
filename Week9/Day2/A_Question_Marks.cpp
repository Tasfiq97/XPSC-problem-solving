#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;

        string s;
        cin >> s;

        ll a[4] = {0};
        ll r = 0;
        for (auto val : s)
            if (val != '?')
                a[val - 'A']++;

        ll ans = 0;
        for (ll i = 0; i < 4; i++)
            ans += min(a[i], n);

        cout << ans << endl;
    }
    return 0;
}