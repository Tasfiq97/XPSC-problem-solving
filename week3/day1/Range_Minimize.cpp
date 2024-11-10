#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        vector<int> a(n);

        for (int i = 0; i < n; ++i)
        {
            cin >> a[i];
        }

        if (n == 3)
        {
            cout << 0 << endl;
            continue;
        }

        sort(a.begin(), a.end());

        int range = a[n - 1] - a[0];
        range = min(range, a[n - 1] - a[2]);
        range = min(range, a[n - 3] - a[0]);
        range = min(range, a[n - 2] - a[1]);

        cout << range << endl;
    }

    return 0;
}
