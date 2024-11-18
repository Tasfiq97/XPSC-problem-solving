#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, n;
        cin >> a >> b >> n;
        int v[n];
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        ll total = b;
        for (auto val : v)
        {
            total += min(1LL + val, a * 1LL) - 1;
        }
        cout << total << endl;
    }
    return 0;
}