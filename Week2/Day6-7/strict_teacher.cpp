#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        ll n, t, q;
        cin >> n >> t >> q;
        vector<int> v(t);

        for (int i = 0; i < t; i++)
        {
            cin >> v[i];
        }
        sort(v.begin(), v.end());
        while (q--)
        {
            ll p, ans = INT_MAX;
            cin >> p;
            auto it = upper_bound(v.begin(), v.end(), p);
            if (it == v.begin())
                ans = v.front() - 1;
            else if (it == v.end())
                ans = n - v.back();
            else
            {
                // for (auto val : v)
                // {
                //     ans = min(ans, abs(p - val));
                // }
                ans = (*it - *(it - 1)) / 2;
            }
            cout << ans << endl;
        }
    }

    return 0;
}