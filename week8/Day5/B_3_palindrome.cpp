#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        putchar(i & 2 ? 'b' : 'a');
    }
    puts("");
    return 0;
}