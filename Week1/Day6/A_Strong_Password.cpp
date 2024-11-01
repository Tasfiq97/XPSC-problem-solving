#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    vector<string> res;

    while (t--)
    {
        string s;
        cin >> s;
        string max_str = s;
        int mx_time = 0;

        for (char c = 'a'; c <= 'z'; ++c)
        {
            for (int i = 0; i <= s.size(); ++i)
            {
                string tmp = s;
                tmp.insert(tmp.begin() + i, c);
                int time = 2;
                for (int j = 1; j < tmp.size(); ++j)
                {
                    if (tmp[j] == tmp[j - 1])
                    {
                        time += 1;
                    }
                    else
                    {
                        time += 2;
                    }
                }
                if (time > mx_time)
                {
                    mx_time = time;
                    max_str = tmp;
                }
            }
        }

        res.push_back(max_str);
    }

    for (string s : res)
    {
        cout << s << endl;
    }

    return 0;
}
