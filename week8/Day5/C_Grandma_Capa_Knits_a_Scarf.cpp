#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t, n;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> n >> s;
        int ans = n + 1;
        for (int c = 0; c < 26; ++c)
        {
            int l = 0, r = n - 1, count = 0;
            while (l <= r)
            {
                if (s[l] == s[r])
                {
                    l++, r--;
                }
                else if (s[l] == char('a' + c))
                {
                    count++, l++;
                }
                else if (s[r] == char('a' + c))
                {
                    count++, r--;
                }
                else
                {
                    count = n + 1;
                    break;
                }
            }
            ans = min(ans, count);
        }
        if (ans == n + 1)
            ans = -1;
        cout << ans << endl;
    }
    return 0;
}