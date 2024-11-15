#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;
        int l = 0, r = 0;
        int count = 0;
        for (int i = 0; i < k; i++)
        {
            if (s[i] == 'W')
                count++;
        }
        int ans = count;
        for (int i = k; i < n; i++)
        {
            if (s[i] == 'W')
                count++;
            if (s[i - k] == 'W')
                count--;
            ans = min(ans, count);
        }
        cout << ans << endl;
    }
    return 0;
}