#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m;
    cin >> n >> m;
    vector<int> v(n + 1);
    vector<int> c(n + 1);
    for (int i = 1; i <= n; i++)
    {
        cin >> v[i];
    }
    set<int> s;
    for (int i = n; i >= 1; i--)
    {
        s.insert(v[i]);
        c[i] = s.size();
    }
    for (int i = 1; i <= m; i++)
    {
        int p;
        cin >> p;
        cout << c[p] << endl;
    }

    return 0;
}