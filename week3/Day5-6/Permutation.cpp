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
        int matrix[n + 5][n];
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j < n; j++)
            {
                cin >> matrix[i][j];
            }
        }
        map<int, int> mp;
        map<int, int> m;
        for (int i = 1; i <= n; i++)
        {
            mp[matrix[i][n - 1]] = i;
            m[matrix[i][n - 1]]++;
        }
        int idx = 0, value;
        for (auto val : m)
        {
            if (val.second == 1)
                idx = val.first;
            else
                value = val.first;
        }
        for (int i = 1; i < n; i++)
        {
            cout << matrix[mp[idx]][i] << " ";
        }
        cout << value << endl;
    }
    return 0;
}