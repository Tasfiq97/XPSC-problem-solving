#include <bits/stdc++.h>
#define ll long long
using namespace std;
void solution()
{
    ll A, B;
    cin >> A >> B;
    if (B != 1)
    {
        cout << "YES" << endl;
        cout << (A * B) << " " << A << " " << (B + 1LL) * A << endl;
        return;
    }
    else
    {
        cout << "NO" << endl;
        return;
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