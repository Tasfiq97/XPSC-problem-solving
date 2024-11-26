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
        string s;
        cin >> s;
        int c = s.length();
        bool flag = false;
        string ans = s;
        for (int i = 0; i < c; i++)
        {
            if (s[i] == s[c - i - 1])
                continue;
            if (s[i] > s[c - i - 1])
            {
                flag = true;
            }
            else
            {
                break;
            }
        }
        reverse(ans.begin(), ans.end());
        if (!flag)
        {
            cout << s << endl;
        }
        else
        {
            cout << ans << s << endl;
        }
    }
    return 0;
}