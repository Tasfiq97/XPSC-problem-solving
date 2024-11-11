#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, c;
        cin >> a >> b >> c;
        vector<int> v1(a), v2(b);
        long long int sum = 0;
        for (int i = 0; i < a; i++)
        {
            cin >> v1[i];
        }
        for (int i = 0; i < b; i++)
        {
            cin >> v2[i];
        }
        sort(v1.begin(), v1.end(), greater<int>());
        sort(v2.begin(), v2.end(), greater<int>());
        long long int ans = 0;
        for (int i = 0; i < min(a, b); i++)
        {
            ans += min(1ll * v2[i] * c, 1ll * v1[i]);
        }
        cout << ans << endl;
    }
    return 0;
}