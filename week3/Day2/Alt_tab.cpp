#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ll t;
    cin >> t;
    stack<string> stack1;
    set<string> st;
    for (int i = 0; i < t; i++)
    {
        string s;
        cin >> s;
        stack1.push(s);
    }
    while (!stack1.empty())
    {
        string t = stack1.top();
        if (st.find(t) == st.end())
        {
            st.insert(t);

            if (t.length() > 2)
            {
                cout << t.substr(t.length() - 2);
            }
        }
        stack1.pop();
    }

    return 0;
}
