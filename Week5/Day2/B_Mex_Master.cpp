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
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }

        int z = 0;
        int non_zero = 0;
        for (int i = 0; i < n; i++)
        {
            if (v[i] != 0)
                non_zero++;
            else
                z++;
        }
        int ans;
        if (z == 0)
        {
            ans = 0;
        }
        else
        {
            if (non_zero >= z - 1)
            {
                ans = 0;
            }
            else
            {
                int mx = *max_element(v.begin(), v.end());
                if (mx == 1)
                {
                    ans = 2;
                }
                else
                {
                    ans = 1;
                }
            }
        }
        cout << ans << endl;
    }
    return 0;
}