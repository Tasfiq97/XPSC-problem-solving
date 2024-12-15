#include <bits/stdc++.h>
#define ll long long int
using namespace std;
void solution()
{
    ll n;
    cin >> n;
    vector<ll> a(n - 1);
    for (auto &it : a)
        cin >> it;
    vector<vector<int>> v(n, vector<int>(30, 0));
    for (int i = 29; i >= 0; i--)
    {
        if (a[0] & (1 << i))
        {
            v[0][i] = 1;
            v[1][i] = 1;
        }
    }

    for (int j = 1; j < n - 1; j++)
    {
        for (int i = 29; i >= 0; i--)
        {
            if (a[j] & (1 << i))
            {
                if (v[j][i] == -1)
                {
                    cout << -1 << endl;
                    return;
                }
                v[j][i] = 1;
                v[j + 1][i] = 1;
            }
        }
        for (int i = 29; i >= 0; i--)
        {
            if (v[j][i] == 1 && v[j + 1][i] != 1)
            {
                v[j + 1][i] = -1;
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        int ans = 0;
        for (int j = 29; j >= 0; j--)
        {
            if (v[i][j] == 1)
            {
                ans |= (1 << j);
            }
        }
        cout << ans << " ";
    }
    cout << endl;
}
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        solution();
    }
    return 0;
}