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
        string s, x;
        cin >> s >> x;
        if (s == x)
        {
            cout << "YES" << endl;
            continue;
        }

        int pos = -1;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '1')
            {
                pos = i;
                break;
            }
        }

        if (pos != -1)
        {
            bool ok = true;
            for (int i = 0; i < n; i++)
            {
                if (s[i] != x[i])
                {
                    if (pos > i)
                    {
                        ok = false;
                        break;
                    }
                }
            }
            if (ok)
            {
                cout << "YES" << endl;
            }
            else
            {
                cout << "NO" << endl;
            }
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}