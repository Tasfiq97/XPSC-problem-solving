#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m;
    cin >> n >> m;
    map<string, string> mp;
    for (int i = 0; i < n; i++)
    {
        string s, ip;
        cin >> s >> ip;
        mp[ip] = s;
    }

    for (int i = 0; i < m; i++)
    {
        string s, ip;
        cin >> s >> ip;
        string newIp = ip.substr(0, ip.size() - 1);
        cout << s << " " << ip << " " << "#" << mp[newIp] << endl;
    }
    return 0;
}