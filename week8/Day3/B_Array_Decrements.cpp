#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int v1[n + 3], v2[n + 4];
        for (int i = 0; i < n; i++)
            cin >> v1[i];
        for (int i = 0; i < n; i++)
            cin >> v2[i];
        int mx = 0;
        map<int, int> mp;
        int ans = 0;
        for (int i = 0; i < n; i++)
        {
            if (v1[i] < v2[i])
                ans = 1;
            else
            {
                if (v2[i] == 0)
                {
                    mx = max(mx, v1[i]);
                }
                else
                {
                    int dif = v1[i] - v2[i];
                    mp[dif]++;
                }
            }
        }
        int c = -1;
        for (auto it : mp)
        {
            c = it.first;
        }
        if (mp.size() > 1)
            ans = 1;
        if (c != -1 && mx > c)
            ans = 1;

        if (ans == 1)
            cout << "NO" << endl;
        else
            cout << "YES" << endl;
    }
    return 0;
}