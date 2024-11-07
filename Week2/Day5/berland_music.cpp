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

        vector<int> v(n);
        for (int i = 0; i < n; ++i)
        {
            cin >> v[i];
        }

        string s;
        cin >> s;
        vector<pair<int, int>> p1, p2;
        for (int i = 0; i < n; ++i)
        {
            if (s[i] == '1')
            {
                p1.push_back({v[i], i});
            }
            else
            {
                p2.push_back({v[i], i});
            }
        }

        sort(p1.begin(), p1.end());
        sort(p2.begin(), p2.end());

        vector<int> q(n);
        int rating = 1;
        for (auto &val : p2)
        {
            q[val.second] = rating++;
        }
        for (auto &val : p1)
        {
            q[val.second] = rating++;
        }

        for (int i = 0; i < n; ++i)
        {
            cout << q[i] << " ";
        }
        cout << endl;
    }

    return 0;
}
