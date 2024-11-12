#include <bits/stdc++.h>
#define ll long long int

using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    ll t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        ll total = 0;
        vector<ll> sum;
        int min_change = 0;
        for (int i = 0; i < n; i++)
        {
            ll L = i;
            ll R = n - i - 1;
            if (s[i] == 'L')
            {
                if (R > L)
                {
                    min_change++;
                    total += R;
                    sum.push_back(R - L);
                }
                else
                {
                    total += L;
                }
            }
            else
            {
                if (L > R)
                {
                    min_change++;
                    total += L;
                    sum.push_back(L - R);
                }
                else
                {
                    total += R;
                }
            }
        }
        vector<ll> ans(n + 1);
        for (int i = min_change; i <= n; i++)
        {
            ans[i] = total  ;
        }
        sort(sum.begin(), sum.end(), greater<ll>());
        for (int i = min_change - 1; i >= 1; i--)
        {
            total -= sum.back();
            sum.pop_back();
            ans[i] = total;
        }
        for (int i = 1; i <= n; i++)
        {
            cout << ans[i] << " ";
        }
        cout << endl;
    }
    return 0;
}