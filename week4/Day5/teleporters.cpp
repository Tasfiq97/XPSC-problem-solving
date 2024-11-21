#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n;
        cin >> m;
        vector<ll> a(n);
        int ans = 0;
        ll sum = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            a[i] += (i + 1);
        }
        sort(a.begin(), a.end());
        for (int i = 0; i < n; i++)
        {
            if (sum + a[i] > m)
            {
                break;
            }
            else
            {
                sum += a[i];
                ans++;
            }
        }
        cout << ans << endl;
    }
    return 0;
}