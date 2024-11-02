#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<string> v(n);
    map<string, bool> mp;
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    for (int i = n - 1; i >= 0; i--)
    {
        if (!mp[v[i]])
        {
            cout << v[i] << endl;
            mp[v[i]] = true;
        }
    }
    return 0;
}