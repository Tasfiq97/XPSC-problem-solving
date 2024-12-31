#include <bits/stdc++.h>
#define ll long long
using namespace std;
void solution()
{
    ll a, b;
    cin >> a >> b;
    if (2LL * a <= b)
    {
        cout << a << " " << 2LL * a << endl;
    }
    else
    {
        cout << -1 << " " << -1 << endl;
    }
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