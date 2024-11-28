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
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }

        map<int, int> fq;
        for (int i = 0; i < n; i++)
        {
            fq[v[i]]++;
        }

        int mx_freq = 0;
        for (auto val : fq)
        {
            mx_freq = max(mx_freq, val.second);
        }
        int ans = 0;
        while (mx_freq < n)
        {
            int rem = n - mx_freq;
            int add = mx_freq;
            ans++;
            ans += min(add, rem);
            mx_freq += min(add, rem);
        }
        cout << ans << endl;
    }
    return 0;
}