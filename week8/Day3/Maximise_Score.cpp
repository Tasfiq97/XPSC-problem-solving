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
        vector<int> diff(n - 1);
        for (int i = 0; i < n - 1; i++)
        {
            diff[i] = abs(v[i] - v[i + 1]);
        }
        int score = INT_MAX;
        if (n >= 2)
        {
            score = min(score, diff[0]);
        }
        if (n >= 2)
        {
            score = min(score, diff[n - 2]);
        }
        for (int i = 0; i < n - 1; i++)
        {
            int mx_diff = max(diff[i - 1], diff[i]);
            score = min(score, mx_diff);
        }
        cout << score << endl;
    }
    return 0;
}