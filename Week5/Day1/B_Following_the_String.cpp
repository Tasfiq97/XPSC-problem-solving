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
        map<char, int> m;
        vector<int> v(n);
        for (int i = 97; i < 97 + 26; i++)
        {
            m[char(i)] = 0;
        }
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
            for (auto val : m)
            {
                if (val.second == v[i])
                {
                    cout << val.first;
                    m[val.first]++;
                    break;
                }
            }
        }
        cout << endl;
    }
    return 0;
}