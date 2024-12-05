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
        vector<int> v(n);

        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }

        reverse(v.begin(), v.end());

        while (!v.empty() and v.back() == 0)
            v.pop_back();

        if (v.empty())
        {
            cout << 0 << endl;
            continue;
        }
        ll ans = 0;
        reverse(v.begin(), v.end());
        n = v.size();
        for (int i = 0; i < n - 1; i++)
        {
            if (v[i] == 0)
            {
                ans++;
            }
            else
            {
                ans += v[i];
            }
        }
        cout << ans << endl;
    }
    return 0;
}