#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        string s;
        cin >> s;
        set<int> st;
        for (int i = 0; i < m; i++)
        {
            int a;
            cin >> a;
            st.insert(a);
        }
        string s2;
        cin >> s2;
        sort(s2.begin(), s2.end());
        int idx = 0;
        for (auto it : st)
        {
            s[it - 1] = s2[idx];
            idx++;
        }
        cout << s << endl;
    }
    return 0;
}