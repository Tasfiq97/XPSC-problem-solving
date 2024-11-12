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
        int i = 0;
        int j = s.size() - 1;
        int ans = n;
        while (i <= j)
        {
            if (s[i] == s[j])
            {
                break;
            }
            else
            {
                ans -= 2;
                i++;
                j--;
            }
        }
        cout << ans << endl;
    }
    return 0;
}