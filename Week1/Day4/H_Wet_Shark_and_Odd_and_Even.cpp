#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    long long total = 0;
    int minOdd = 1e9 + 5;
    for (int i = 0; i < n; i++)
    {
        total += v[i];
        if (v[i] % 2 != 0)
        {
            minOdd = min(minOdd, v[i]);
        }
    }
    if (total % 2 == 0)
    {
        cout << total << endl;
    }
    else
    {
        cout << total - minOdd << endl;
    }

    return 0;
}