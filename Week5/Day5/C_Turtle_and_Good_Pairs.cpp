#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        string s;
        cin >> n >> s;

        vector<pair<int, char>> fq(26);
        for (int i = 0; i < 26; i++)
            fq[i].second = 'a' + i;

        for (char c : s)
            fq[c - 'a'].first++;

        sort(fq.rbegin(), fq.rend());
        string res(n, ' ');

        int index = 0;
        for (auto [count, ch] : fq)
        {
            if (count == 0)
                break;

            for (int i = 0; i < count; i++)
            {
                if (index >= n)
                    index = 1;

                res[index] = ch;
                index += 2;
            }
        }

        cout << res << endl;
        }
    return 0;
}