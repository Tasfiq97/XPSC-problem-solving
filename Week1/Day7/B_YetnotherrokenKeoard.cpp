#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        int lower = 0, upper = 0;
        deque<char> dq;
        for (int i = s.size() - 1; i >= 0; i--)
        {
            if (s[i] == 'B')
            {
                upper++;
                continue;
            }
            if (s[i] == 'b')
            {
                lower++;
                continue;
            }
            if (lower && islower(s[i]))
            {
                lower--;
                continue;
            }
            if (upper && isupper(s[i]))
            {
                upper--;
                continue;
            }
            dq.push_front(s[i]);
        }
        for (auto &it : dq)
        {
            cout << it;
        }
        cout << endl;
    }
    return 0;
}