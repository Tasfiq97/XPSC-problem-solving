#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    map<string, int> mp;
    while (n--)
    {
        string s;
        cin >> s;
        if (mp.count(s) == 0)
        {
            mp[s] = 1;
            cout << "OK" << endl;
        }
        else
        {
            int count = mp[s];
            cout << s << count << endl;
            mp[s] = count + 1;
        }
    }
    return 0;
}