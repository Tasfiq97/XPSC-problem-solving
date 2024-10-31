#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, t;
    cin >> n >> t;
    int count = 0;
    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j <= n - i; j++)
        {
            for (int k = 0; k <= n - i - j; k++)
            {
                if (i * j * k <= t)
                {

                    count++;
                }
            }
        }
    }
    cout << count << endl;
    return 0;
}