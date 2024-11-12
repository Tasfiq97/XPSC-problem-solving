#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m;
    cin >> n >> m;
    vector<int> v1(n), v2(m);
    for (int i = 0; i < n; i++)
    {
        cin >> v1[i];
    }
    for (int i = 0; i < m; i++)
    {
        cin >> v2[i];
    }
    int i = 0;
    int j = 0;
    int count = 0;
    while (j < m)
    {
        if (i < n && v1[i] < v2[j])
        {
            count++;
            i++;
        }
        else
        {
            cout << count << " ";
            j++;
        }
    }
    return 0;
}