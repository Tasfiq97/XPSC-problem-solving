#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int dig = 0;
    int temp = n;
    while (temp > 0)
    {
        temp = temp / 10;
        dig++;
    }
    if (n == 0)
    {
        dig = 1;
    }
    int zeros = 4 - dig;
    for (int i = 0; i < zeros; i++)
    {
        cout << "0";
    }
    cout << n << endl;
    return 0;
}