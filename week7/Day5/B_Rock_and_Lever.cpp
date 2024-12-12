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
        long long int v[n];
        long long int s = 0;
        for (int i = 0; i < n; i++)
            cin >> v[i];
        long long int a[33] = {0};
        for (int i = 0; i < n; i++)
        {
            long long int d = v[i];
            int c = 0;
            while (d > 0)
            {
                d = d / 2;
                c++;
            }
            a[c]++;
        }
        for (int i = 0; i <= 32; i++)
        {
            if (a[i] >= 2)
                s = s + (a[i] * (a[i] - 1) / 2);
        }
        cout << s << endl;
    }
    return 0;
}