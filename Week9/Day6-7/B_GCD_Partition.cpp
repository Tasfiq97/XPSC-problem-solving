#include <bits/stdc++.h>
using namespace std;
int solution()
{
    int n;
    cin >> n;
    vector<int> v(n);
    vector<long long> p(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        if (i == 0)
        {
            p[i] = v[i];
        }
        else
        {
            p[i] = p[i - 1] + v[i];
        }
    }
    long long ans = 0;
    for (int i = 1; i < n; i++)
    {
        ans = max(ans, __gcd(p[i - 1], p[n - 1] - p[i - 1]));
    }
    cout << ans << endl;
    return 0;
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