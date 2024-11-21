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
        string ans = "";
        for (int i = 0; i < n; i++)
        {
            if (i + 2 < n && s[i + 2] == '0' && (i + 3 >= n || s[i + 3] != '0'))
            {
                int sum = ((s[i] - '0') * 10) + (s[i + 1] - '0');
                char ch = 96 + sum;
                ans.push_back(ch);
                i += 2;
            }
            else
            {
                int sum2 = s[i] - '0';
                char ch2 = 96 + sum2;
                ans.push_back(ch2);
            }
        }
        cout << ans << endl;
    }

    return 0;
}