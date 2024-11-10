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
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        int check = 0;
        int s = 0;
        int e = n - 1;
        int mx = n;
        int mn = 1;
        while (e >= s)
        {
            if ((v[e] == mx && v[s] == mn) || (v[e] == mn && v[s] == mx))
            {
                e--;
                s++;
                mn++;
                mx--;
            }
            else if (v[e] == mx)
            {
                e--;
                mx--;
            }
            else if (v[e] == mn)
            {
                e--;
                mn++;
            }
            else if (v[s] == mx)
            {
                s++;
                mx--;
            }
            else if (v[s] == mn)
            {
                s++;
                mn++;
            }
            else
            {
                cout << s + 1 << " " << e + 1 << endl;
                check = 1;
                break;
            }
        }
        if (check == 0)
            cout << -1 << endl;
    }
}