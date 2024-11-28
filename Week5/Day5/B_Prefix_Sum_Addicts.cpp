#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        vector<ll> v1(n + 1, 0);
        for (int i = n - k + 1; i <= n; i++)
        {
            cin >> v1[i];
        }
        vector<ll> a(n + 1);

        if (n == 1 or k == 1)
        {
            cout << "YES" << endl;
            continue;
        }

        for (int i = n; i >= n - k + 2; i--)
        {
            a[i] = (v1[i] - v1[i - 1]);
        }

        bool is_possible = true;

        for (int i = n - k + 2; i <= n; i++)
        {
            if (i + 1 <= n and a[i + 1] < a[i])
            {
                is_possible = false;
                break;
            }
        }

        if (!is_possible)
        {
            cout << "NO" << endl;
            continue;
        }

        for (int i = n - k + 1; i > 1; i--)
        {
            a[i] = a[i + 1];
            v1[i - 1] = v1[i] - a[i];
        }
        a[1] = v1[1];

        for (int i = 1; i <= n; i++)
        {
            if (i + 1 <= n and a[i + 1] < a[i])
            {
                is_possible = false;
                break;
            }
        }

        if (is_possible)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}