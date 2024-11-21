#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long tt;
    cin >> tt;
    while (tt--)
    {
        long long n;
        cin >> n;
        long long a[n + 10], i;
        for (i = 1; i <= n; i++)
        {
            cin >> a[i];
        }
        string s;
        cin >> s;
        a[0] = 0;
        for (i = 1; i <= n; i++)
        {
            a[i] = a[i] + a[i - 1];
        }
        int l = n;
        long long ans = 0, j;
        for (i = 0; i < n; i++)
        {
            if (s[i] == 'L')
            {
                int f = 0;
                for (j = l - 1; j > i; j--)
                {
                    if (s[j] == 'R')
                    {
                        l = j;
                        f = 1;
                        break;
                    }
                    else
                    {
                        l--;
                    }
                }
                if (f == 1)
                {

                    ans += a[l + 1] - a[i];
                }
            }
        }
        cout << ans << endl;
    }
    return 0;
}