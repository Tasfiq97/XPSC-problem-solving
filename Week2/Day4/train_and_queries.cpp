#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        map<int, set<int>> mp;
        for (int i = 1; i <= n; i++)
        {
            int x;
            cin >> x;
            mp[x].insert(i);
        }
        for (int i = 1; i <= m; i++)
        {
            int s, e;
            cin >> s >> e;
            if ((mp.find(s) == mp.end()) || (mp.find(e) == mp.end()))
            {
                cout << "NO" << endl;
            }
            else
            {
                int ste, ende;
                ste = *mp[s].begin();
                ende = *mp[e].rbegin();
                if (ste < ende)
                {
                    cout << "YES" << endl;
                }
                else
                {
                    cout << "NO" << endl;
                }
            }
        }
    }
    return 0;
}