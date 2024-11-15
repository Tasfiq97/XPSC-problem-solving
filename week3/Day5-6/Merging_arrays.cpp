#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m;
    cin >> n >> m;
    vector<int> a1(n);
    vector<int> a2(m);
    for (int i = 0; i < n; i++)
    {
        cin >> a1[i];
    }
    for (int i = 0; i < m; i++)
    {
        cin >> a2[i];
    }
    int l = 0, r = 0;
    vector<int> ans;
    while (l < n && r < m)
    {
        if (a1[l] <= a2[r])
        {
            ans.push_back(a1[l]);
            l++;
        }
        else
        {
            ans.push_back(a2[r]);
            r++;
        }
    }
    while (l < n)
    {
        ans.push_back(a1[l]);
        l++;
    }
    while (r < m)
    {
        ans.push_back(a2[r]);
        r++;
    }
    for (int val : ans)
    {
        cout << val << " ";
    }
    return 0;
}