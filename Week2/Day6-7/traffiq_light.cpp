#include <bits/stdc++.h>
using namespace std;

int findMinWaitTime(long long int n, char c, const string &s)
{
    if (c == 'g')
        return 0;

    vector<long long int> v(n, -1);

    int near = -1;
    for (int i = 2 * n - 1; i >= 0; --i)
    {
        int pos = i % n;
        if (s[pos] == 'g')
        {
            near = i;
        }
        if (near != -1)
        {
            v[pos] = near;
        }
    }
    int mx = 0;
    for (int i = 0; i < n; ++i)
    {
        if (s[i] == c)
        {
            int time = v[i] - i;
            mx = max(mx, time);
        }
    }

    return mx;
}

int main()
{
    long long int t;
    cin >> t;

    while (t--)
    {
        long long int n;
        char c;
        cin >> n >> c;
        string s;
        cin >> s;

        cout << findMinWaitTime(n, c, s) << endl;
    }

    return 0;
}