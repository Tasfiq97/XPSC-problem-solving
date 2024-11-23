#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, s;
        cin >> n >> s;
        int sum = 0;
        int a[n + 4];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            sum += a[i];
        }
        if (sum == s)
            cout << 0 << endl;
        else if (sum < s)
            cout << -1 << endl;
        else
        {
            int count = 0;
            int ans = 0;
            int k;
            for (int i = 0; i < n; i++)
            {
                ans += a[i];
                count++;
                if (ans == s)
                {
                    k = i + 1;
                    break;
                }
            }
            int mx = count;
            int idx = 0;
            for (int i = k; i < n; i++)
            {
                int r = i;
                while (r < n)
                {
                    if (a[r] == 1)
                    {
                        break;
                    }
                    count++;
                    mx = max(mx, count);
                    r++;
                }
                i = r;
                ans++;
                while (idx < n)
                {
                    if (a[idx] == 1)
                    {

                        idx++;
                        break;
                    }
                    count--;
                    idx++;
                    mx = max(mx, count);
                }
                        }
            cout << n - mx << endl;
        }
    }
    return 0;
}