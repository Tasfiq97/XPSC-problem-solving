#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        ll arr[n];
        ll mn;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            if (i == 0)
                mn = arr[0];
            else
                mn = mn & arr[i];
        }

        cout << mn << endl;
    }
    return 0;
}