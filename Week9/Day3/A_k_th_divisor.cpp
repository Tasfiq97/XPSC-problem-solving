#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long n, k;
    cin >> n >> k;
    vector<long long> allDivisors;
    for (long long i = 1; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            allDivisors.push_back(i);
            if ((n / i) != i)
            {
                allDivisors.push_back(n / i);
            }
        }
    }

    sort(allDivisors.begin(), allDivisors.end());

    if (allDivisors.size() < k)
    {
        cout << -1 << '\n';
    }
    else
    {
        cout << allDivisors[k - 1] << '\n';
    }
    return 0;
}