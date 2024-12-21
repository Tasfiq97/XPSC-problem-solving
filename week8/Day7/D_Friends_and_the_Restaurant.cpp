#include <bits/stdc++.h>
#define ll long long int
#define Fast                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);                       \
    cout.tie(0);
using namespace std;
int main()
{
    Fast;
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<ll> v(n, 0);

        for (int i = 0; i < n; i++)
        {
            ll x;
            cin >> x;
            v[i] -= x;
        }
        for (int i = 0; i < n; i++)
        {
            ll x;
            cin >> x;
            v[i] += x;
        }

        sort(v.begin(), v.end(), greater<ll>());

        int ans = 0;
        int l = 0, r = n - 1;
        while (l < r)
        {
            if (v[l] > -1 and v[r] > -1)
            {
                ans++;
                l++, r--;
            }
            else if (v[l] < 0 and v[r] < 0)
            {
                break;
            }
            else if (v[l] > -1)
            {
                if (v[l] >= abs(v[r]))
                {
                    ans++;
                    l++, r--;
                }
                else
                {
                    r--;
                }
            }
        }

        cout << ans << endl;
    }
    return 0;
}