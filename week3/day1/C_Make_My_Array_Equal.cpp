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
        int n;
        cin >> n;
        vector<int> v(n);

        for (int i = 0; i < n; ++i)
        {
            cin >> v[i];
        }
        int gcd_main = 0;
        for (int i = 0; i < n; ++i)
        {
            if (v[i] != 0)
            {
                if (gcd_main == 0)
                {
                    gcd_main = v[i];
                }
                else
                {
                    gcd_main = gcd(gcd_main, v[i]);
                }
            }
        }

        bool equal = true;
        for (int i = 0; i < n; ++i)
        {
            if (v[i] != 0 && v[i] != gcd_main)
            {
                equal = false;
                break;
            }
        }

        if (equal)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}
