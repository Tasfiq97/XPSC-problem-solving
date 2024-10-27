#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    int i = 0;
    int j = n - 1;
    int s_val = 0;
    int d_val = 0;
    bool first = true;
    while (i <= j)
    {
        if (v[i] <= v[j])
        {
            if (first)
            {
                s_val += v[j];
            }
            else
            {
                d_val += v[j];
            }
            j--;
        }
        else
        {
            if (first)
            {
                s_val += v[i];
            }
            else
            {
                d_val += v[i];
            }
            i++;
        }
        first = !first;
    }
    cout << s_val << " " << d_val << endl;
    return 0;
}
