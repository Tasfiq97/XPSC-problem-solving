#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v[1100];

    for (int i = 1; i <= 1000; i++)
    {
        for (int j = 1; j <= 1000; j++)
        {
            if (__gcd(i, j) == 1)
            {
                v[i].push_back(j);
            }
        }
    }

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> a(n + 1);
        for (int i = 1; i <= n; i++)
        {
            cin >> a[i];
        }

        vector<int> indexMax(1111, -1);

        for (int i = 1; i <= n; i++)
        {
            indexMax[a[i]] = i;
        }

        int ans = 0;

        for (int i = 1; i <= 1000; i++)
        {
            if (indexMax[i] == -1)
                continue;

            if (i == 1)
            {
                ans = max(ans, 2 * indexMax[i]);
                continue;
            }
            for (auto val : v[i])
            {
                if (indexMax[val] != -1)
                {
                    ans = max(ans, indexMax[i] + indexMax[val]);
                }
            }
        }
        if (ans == 0)
            ans = -1;
        cout << ans << endl;
    }
    return 0;
}