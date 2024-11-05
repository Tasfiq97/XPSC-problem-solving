#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    multiset<int> ms;
    for (int i = 0; i < n; i++)
    {
        int c;
        cin >> c;
        ms.insert(c);
    }
    int ans = 0;
    int p = 1;
    while (!ms.empty())
    {
        auto lb = ms.lower_bound(p);
        if (lb != ms.end())
        {
            ans++;
            ms.erase(lb);
        }
        else
        {
            break;
        }
        p++;
    }
    cout << ans << endl;
    return 0;
}