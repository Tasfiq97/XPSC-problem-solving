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
        for (int i = 31; i >= 0; i--)
        {
            if ((n & (1 << i)) > 0)
            {
                cout << (n - (1 << i)) << " " << (1 << i) << endl;
                break;
            }
        }
    }
    return 0;
}