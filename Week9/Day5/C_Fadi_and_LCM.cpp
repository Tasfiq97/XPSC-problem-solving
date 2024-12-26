#include <bits/stdc++.h>
#define ll long long
using namespace std;

class Solution
{
public:
    void solution()
    {
        ll x;
        cin >> x;
        vector<ll> v;
        ll i = 2;
        while (i * i <= x)
        {
            if (x % i == 0)
            {
                ll cur = 1;
                while (x % i == 0)
                {
                    x /= i;
                    cur *= i;
                }
                v.push_back(cur);
            }
            i++;
        }

        if (x > 1)
        {
            v.push_back(x);
        }
        ll n = v.size();
        ll ans_A = 1e18;
        ll ans_B = 1e18;

        ll k = 0;
        while (k < (1 << n))
        {
            ll a = 1;
            ll b = 1;

            ll j = 0;
            while (j < n)
            {
                if ((k >> j) & 1)
                {
                    a *= v[j];
                }
                else
                {
                    b *= v[j];
                }
                j++;
            }

            if (max(a, b) < max(ans_A, ans_B))
            {
                ans_A = a;
                ans_B = b;
            }
            k++;
        }
        cout << ans_A << " " << ans_B << endl;
    }
};
int main()
{

    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll t = 1;

    while (t--)
    {
        Solution obj;
        obj.solution();
    }
    return 0;
}