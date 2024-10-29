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
        string s;
        cin >> s;
        int firstPos = 0, lastPos = 0;
        firstPos = s.find('B');
        lastPos = s.rfind('B');
        int ans = lastPos - firstPos + 1;
        cout << ans << endl;
    }
    return 0;
}