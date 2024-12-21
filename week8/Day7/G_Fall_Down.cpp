#include <bits/stdc++.h>
#define ll long long
using namespace std;
void solution()
{
    ll n, m;
    cin >> n >> m;
    vector<vector<char>> g(n, vector<char>(m));
    for (ll i = 0; i < n; i++)
    {
        for (ll j = 0; j < m; j++)
        {
            cin >> g[i][j];
        }
    }
    vector<vector<char>> ans(n, vector<char>(m, '.'));
    for (ll i = 0; i < m; i++)
    {
        ll sum = 0;
        for (ll j = 0; j < n; j++)
        {
            if (g[j][i] == '*')
            {
                sum++;
            }
            else if (g[j][i] == 'o')
            {
                ans[j][i] = 'o';
                for (ll k = 1; k <= sum; k++)
                {
                    ans[j - k][i] = '*';
                }
                sum = 0;
            }
        }
        if (sum)
        {
            for (ll k = 1; k <= sum; k++)
            {
                ans[n - k][i] = '*';
            }
        }
    }
    for (ll i = 0; i < n; i++)
    {
        for (ll j = 0; j < m; j++)
        {
            cout << ans[i][j];
        }
        cout << endl;
    }
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