#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, n;
        cin >> a >> b >> n;
        int ans1 = abs(a - 1);
        int ans2 = abs(b - n) + (n - 1);

        if (ans1 == ans2)
        {
            cout << 3 << endl;
        }
        else if (ans1 < ans2)
        {
            cout << 1 << endl;
        }
        else
        {
            cout << 2 << endl;
        }
    }
    return 0;
}