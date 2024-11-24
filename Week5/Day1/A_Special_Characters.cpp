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
        int v = n / 2;
        if (n % 2 != 0)
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl;
            for (int i = 1; i <= v; i++)
            {
                if (i % 2)
                    cout << "AA";
                else
                    cout << "BB";
            }
            cout << endl;
        }
    }
    return 0;
}