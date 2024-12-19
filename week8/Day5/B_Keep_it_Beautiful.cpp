#include <bits/stdc++.h>
using namespace std;

void solution()
{
    int n;
    cin >> n;
    vector<int> v;
    int c = 0;
    int tmp;
    cin >> tmp;
    cout << "1";
    v.push_back(tmp);
    for (int i = 1; i < n; i++)
    {
        cin >> tmp;
        if (c == 0)
        {
            if (tmp >= v.back())
            {
                v.push_back(tmp);
                cout << "1";
            }
            else
            {
                if (v[0] >= tmp)
                {
                    v.push_back(tmp);
                    c++;
                    cout << "1";
                }
                else
                {
                    cout << "0";
                }
            }
        }
        else if (c == 1)
        {
            if (tmp >= v.back() && tmp <= v[0])
            {
                v.push_back(tmp);
                cout << "1";
            }
            else
            {
                cout << "0";
            }
        }
        else
        {
            cout << "0";
        }
    }
    cout << endl;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solution();
    }
    return 0;
}