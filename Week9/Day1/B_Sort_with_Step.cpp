#include <bits/stdc++.h>
using namespace std;
void solution()
{
    int n, k;
    cin >> n >> k;
    vector<int> v(n);
    map<int, int> mp;

    for (auto &x : v)
    {
        cin >> x;
    }
    vector<int> temp = v;
    sort(temp.begin(), temp.end());

    map<int, set<int>> m;
    for (int i = 0; i < n; i++)
    {
        m[i % k].insert(v[i]);
    }

    for (int i = 0; i < n; i++)
    {
        auto check = m[i % k];
        if (check.find(temp[i]) == check.end())
        {
            mp[i % k]++;
        }
    }
    if (mp.size() == 0)
    {
        cout << "0" << endl;
        return;
    }

    int count = 0;
    for (auto x : mp)
    {
        if (x.second == 1)
        {
            count++;
        }
        else
        {
            count += 100;
        }
    }
    if (count == 2)
    {
        cout << "1" << endl;
    }
    else
    {
        cout << "-1" << endl;
    }
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solution();
    }
    return 0;
}