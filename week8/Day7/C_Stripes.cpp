#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        char grid[8][8] = {'.'};
        for (ll i = 0; i < 8; i++)
        {
            for (ll j = 0; j < 8; j++)
            {
                cin >> grid[i][j];
            }
        }
        bool isValid = false;
        for (ll i = 0; i < 8; i++)
        {
            bool flag = true;
            for (ll j = 0; j < 8; j++)
            {
                if (grid[i][j] != 'R')
                {
                    flag = false;
                    break;
                }
            }
            if (flag)
            {
                isValid = true;
                cout << 'R' << endl;
                break;
            }
        }
        if (!isValid)
        {
            for (ll i = 0; i < 8; i++)
            {
                bool flag = true;
                for (ll j = 0; j < 8; j++)
                {
                    if (grid[j][i] != 'B')
                    {
                        flag = false;
                        break;
                    }
                                }
                if (flag)
                {
                    isValid = true;
                    cout << 'B' << endl;
                    break;
                }
            }
        }
    }
    return 0;
}