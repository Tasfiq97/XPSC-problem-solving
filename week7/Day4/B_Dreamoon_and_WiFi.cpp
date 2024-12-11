#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    string s1, s2;

    cin >> s1 >> s2;

    int p1 = 0;
    int p2 = 0;
    int isEmpty = 0;

    for (int i = 0; i < s1.size(); i++)
    {
        if (s1[i] == '+')
        {
            p1++;
        }
        if (s2[i] == '+')
        {
            p2++;
        }
        if (s2[i] == '?')
        {
            isEmpty++;
        }
    }

    int count = 0;

    for (int i = 0; i < (1 << isEmpty); i++)
    {

        if (__builtin_popcount(i) + p2 == p1)
        {
            count++;
        }
    }
    cout << fixed << setprecision(9) << (double)count / (1 << isEmpty) << endl;
    return 0;
}