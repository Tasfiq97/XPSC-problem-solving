#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m;
    cin >> n >> m;
    vector<long long int> v(n);
    for (int i = 0; i < n; i++)
    {
        long long int n;
        cin >> n;
        if (n != m)
        {
            v[i] = n;
        }
    }
    for (int i = 0; i < n; i++)
    {
        if (v[i] != 0)
        {
            cout << v[i] << " " << endl;
        }
    }
    return 0;
}