#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;

        if (((n % 2 == 0) && (m % 2 == 1)) || (m < n))
        {
            cout << "NO" << endl;
        }
        else if ((n % 2) == 1)
        {
            cout << "YES" << endl;
            for (int i = 1; i < n; ++i)
            {
                cout << "1 ";
            }
            cout << m - n + 1 << endl;
        }
        else
        {
            cout << "YES" << endl;
            for (int i = 2; i < n; ++i)
            {
                cout << "1 ";
            }
            cout << (m - n + 2) / 2 << ' ' << (m - n + 2) / 2 << endl;
        }
    }

    return 0;
}