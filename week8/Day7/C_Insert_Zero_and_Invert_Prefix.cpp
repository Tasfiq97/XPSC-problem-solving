#include <bits/stdc++.h>
#define ll long long int
#define Faster                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);                       \
    cout.tie(0);
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }

        if (v[n - 1] == 1)
        {
            cout << "NO" << endl;
            continue;
        }

        cout << "YES" << endl;

        vector<int> ans;
        for (int i = n - 1; i > -1; i--)
        {
            if (v[i] == 0)
            {
                if (i == 0 or v[i - 1] == 0)
                {
                    ans.push_back(0);
                }
                else if (v[i - 1] == 1)
                {
                    int cnt = 0, temp;
                    int j = i - 1;
                    int nxt;
                    while (j > -1 and v[j] == 1)
                    {
                        cnt++;
                        nxt = j;
                        j--;
                    }
                    temp = cnt;
                    while (cnt--)
                    {
                        ans.push_back(0);
                    }
                    ans.push_back(temp);
                    i = nxt + 1;
                }
            }
        }
        for (int i = 0; i < ans.size(); i++)
        {
            cout << ans[i] << " ";
        }
        cout << endl;
    }
    return 0;
}