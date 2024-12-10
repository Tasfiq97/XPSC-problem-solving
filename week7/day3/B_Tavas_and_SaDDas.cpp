#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int l = 0;
    int ans = 0;
    while (n)
    {
        if (n % 10 == 7)
            ans += (1 << l);
        n /= 10;
        l++;
    }
    for (int i = 1; i < l; i++)
        ans += (1 << i);
    cout << ans + 1 << endl;
    return 0;
}