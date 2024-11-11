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
        map<int, int> mp;
        int arr[n];
        int ans = 0;
        int remains = n;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            mp[arr[i]]++;
        }
        int i = 0;
        while (mp.size() != remains)
        {
            ans++;
            mp[arr[i]]--;
            if (mp[arr[i]] == 0)
                mp.erase(arr[i]);
            i++;
            remains--;
        }
        cout << ans << endl;
    }
    return 0;
}