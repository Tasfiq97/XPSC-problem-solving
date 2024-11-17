#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        string s;
        cin >> s;
        ll c = 0;
        for (int i = 0; i < s.size(); i++)
        {
            if ((i > 0) && s[i] != s[i - 1])
                c++;
        }
        cout << (c + 1) / 2 << endl;
    }

    return 0;
}