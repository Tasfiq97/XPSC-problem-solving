#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b;
    cin >> a >> b;
    int max = 0;
    if (a == b)
    {
        max = a + b;
    }
    else if (a > b)
    {
        max = a + a - 1;
    }
    else
    {
        max = b + b - 1;
    }
    cout << max << endl;
    return 0;
}