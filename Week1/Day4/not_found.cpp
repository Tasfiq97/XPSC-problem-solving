#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    vector<int> freq(26, 0);
    char ans = ' ';
    for (int i = 0; i < s.size(); i++)
    {
        freq[s[i] - 'a']++;
    }
    for (int i = 0; i < 26; i++)
    {
        if (freq[i] == 0)
        {
            ans = char(i + 'a');
            break;
        }
    }
    if (ans == ' ')
        cout << "None" << endl;
    else
        cout << ans << endl;
    return 0;
}