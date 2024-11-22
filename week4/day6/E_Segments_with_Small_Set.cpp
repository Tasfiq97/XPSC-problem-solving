#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll n, k;
    cin >> n >> k;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    map<int, int> m;
    ll ans = 0;
    int l = 0, r = 0;
    int count = 0;
    while (r < n)
    {

        if (m[a[r]] == 0)
        {
            count++;
        }
        m[a[r]]++;

        while (count > k)
        {
            m[a[l]]--;
            if (m[a[l]] == 0)
            {
                count--;
            }
            l++;
        }

        ans += (r - l + 1);

        r++;
    }

    cout << ans << endl;
    return 0;
}
