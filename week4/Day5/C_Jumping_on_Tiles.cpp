#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        int n;
        n = s.size();

        vector<pair<char, int>> v;

        char minimum = min(s[0], s[n - 1]);
        char maximum = max(s[0], s[n - 1]);

        for (int i = 0; i < n; i++)
        {
            if ((s[i] >= minimum and s[i] <= maximum))
            {
                v.push_back({s[i], i});
            }
        }

        sort(v.begin(), v.end(), [&](pair<char, int> a, pair<char, int> b)
             { return a.second < b.second; });

        if (v.size() > 2)
        {
            sort(v.begin() + 1, v.begin() + v.size() - 1, [&](pair<char, int> a, pair<char, int> b)
                 {
                if(s[0]>s[n-1]){
                    return a.first>b.first;
                }
                return a.first<b.first; });
        }

        vector<int> v2;

        ll m = 0;

        v2.push_back(1);

        for (int i = 1; i < v.size(); i++)
        {
            m += abs(v[i - 1].first - v[i].first);
            v2.push_back(v[i].second + 1);
        }

        cout << m << " " << v2.size() << endl;

        for (auto i : v2)
        {
            cout << i << " ";
        }
        cout << endl;
    }
    return 0;
}