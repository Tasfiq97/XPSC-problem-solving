#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int t;
    cin >> t;

    while (t--)
    {
        long long int n;
        cin >> n;

        vector<long long int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        priority_queue<long long int> pq;
        long long int total = 0;

        for (int i = 0; i < n; i++)
        {
            if (v[i] == 0)
            {

                if (!pq.empty())
                {
                    total += pq.top();
                    pq.pop();
                }
            }
            else
            {

                pq.push(v[i]);
            }
        }

        cout << total << endl;
    }

    return 0;
}
