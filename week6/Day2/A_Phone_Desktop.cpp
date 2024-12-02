#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x, y;
        cin >> x >> y;
        int count = 0;
        while (x > 0 || y > 0)
        {
            if (y >= 2)
            {
                y = y - 2;
                x = x - 7;
                count++;
            }
            else
            {
                if (y == 1)
                {
                    y -= 1;
                    x -= 11;
                    count++;
                }
                else
                {
                    x -= 15;
                    count++;
                }
            }
        }
        cout << count << endl;
    }
    return 0;
}