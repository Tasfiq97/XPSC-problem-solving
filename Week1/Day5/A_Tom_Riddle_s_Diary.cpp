#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    map<string, bool> m;
    while (t--)
    {
        string s;
        cin >> s;
        if (m[s] == true)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
            m[s] = true;
        }
    }
    return 0;
}