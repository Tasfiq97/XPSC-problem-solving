#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<ll> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }

        ll ans = 0;
        for (int i = 0; i <= 12; i++)
        {
            bool one_bit = false, zero_bit = false;
            for (int j = 0; j < n; j++)
            {
                bitset<13> b(v[j]);
                one_bit |= (b[i] == 1);
                zero_bit |= (b[i] == 0);
            }
            if (one_bit && zero_bit)
            {
                ans += (1ll << (ll)i);
            }
        }
        cout << ans << endl;
    }
    return 0;
}