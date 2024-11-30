#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll n, i, k, size, j;
        string s;
        std::vector<ll> v;
        cin >> n >> k;
        cin >> s;

        for (i = 0; i < n; i++)
        {
            if (s[i] == '1')
                v.push_back(i + 1);
        }
        ll count = 0;
        if (v.size() == 0)
        {
            for (i = 1; i <= n; i += (k + 1))
                count++;
        }

        else
        {
            for (i = v[v.size() - 1] + (k + 1); i <= n; i += (k + 1))
            {
                count++;
            }

            for (i = 1; i <= (v[0] - (k + 1)); i += (k + 1))
            {
                count++;
            }

            ll f, d, dif;
            for (i = 0; i < v.size() - 1; i++)
            {
                f = v[i];
                d = v[i + 1];
                for (j = f + (k + 1); j <= d - (k + 1); j += (k + 1))
                {
                    count++;
                }
            }
        }
        cout << count << endl;
    }
    return 0;
}