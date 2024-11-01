#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> arr(n);
    map<int, int> mp;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int size : arr)
    {
        mp[size]++;
    }
    int visible = 0;
    for (auto pair : mp)
    {
        visible = max(visible, pair.second);
    }
    cout << visible << endl;
    return 0;
}