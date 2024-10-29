#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    int sum = 0;
    if (b > c)
    {
        cout << 0 << endl;
        return 0;
    }
    else
    {

        for (int i = 1; i <= 20; i++)
        {
            int multy = a * i;

            if (multy > c)
            {
                break;
            }
            sum += b;
        }
    }
    cout << sum << endl;
    return 0;
}