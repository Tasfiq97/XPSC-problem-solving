#include <bits/stdc++.h>
using namespace std;
int main()
{
    map<int, int> m;
    int l = 0;
    m[0] = -1;
    int sum = 0;
    for (int i = 0; i < arr.size(); i++)
    {
        sum += arr[i];
        if (m.find(sum - k) != m.end())
        {
            l = max(l, i - m[sum - k]);
        }
        if (m.find(sum) == m.end())
        {
            m[sum] = i;
        }
    }
    return l;
    return 0;
}