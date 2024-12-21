#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        map<string, ll> m;
        ll ans = 0;
        for (ll i = 0; i < n; i++)
        {
            string s;
            cin >> s;
            string temp = s;
            for (char ch = 'a'; ch <= 'z'; ch++)
            {
                if (ch != s[0])
                {
                    temp[0] = ch;

                    ans += m[temp];
                }
            }
            temp = s;
            for (char ch = 'a'; ch <= 'z'; ch++)
            {
                if (ch != s[1])
                {
                    temp[1] = ch;
                    ans += m[temp];
                }
            }
            m[s]++;
        }
        cout << ans << endl;
    }
    return 0;
}
