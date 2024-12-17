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
        string s;
        cin >> s;
        int one_count = 0;
        int zero_count = 0;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '1')
            {
                one_count++;
            }
            else
            {
                zero_count++;
            }
        }
        int mn = min(one_count, zero_count);
        if (mn % 2 == 0)
        {
            cout << "Ramos" << endl;
        }
        else
        {
            cout << "zlatan" << endl;
        }
    }
    return 0;
}