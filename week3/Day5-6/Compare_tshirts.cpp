#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string a, b;
        cin >> a >> b;
        int n = a.size();
        int m = b.size();

        char v1, v2;
        int x1 = 0, x2 = 0;
        for (int i = 0; i < n; i++)
        {
            if (a[i] != 'X')
            {
                v1 = a[i];
            }
            else
            {
                x1++;
            }
        }
        for (int i = 0; i < m; i++)
        {
            if (b[i] != 'X')
            {
                v2 = b[i];
            }
            else
            {
                x2++;
            }
        }

        if (v1 == v2)
        {
            if (x1 == x2 or v1 == 'M')
            {
                cout << "=" << endl;
                continue;
            }
            if (v1 == 'S')
            {
                if (x1 > x2)
                {
                    cout << "<" << endl;
                }
                else
                {
                    cout << ">" << endl;
                }
            }
            else if (v1 == 'L')
            {
                if (x1 > x2)
                {
                    cout << ">" << endl;
                }
                else
                {
                    cout << "<" << endl;
                }
            }
            continue;
        }
        if (v1 == 'S')
        {
            cout << "<" << endl;
        }
        else if (v1 == 'M' and v2 == 'S')
        {
            cout << ">" << endl;
        }
        else if (v1 == 'M' and v2 == 'L')
        {
            cout << "<" << endl;
        }
        else if (v1 == 'L')
        {
            cout << ">" << endl;
        }
    }
    return 0;
}