#include <iostream>
#include <vector>
#include <string>
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
        vector<int> ans(n);

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        for (int i = 0; i < n; i++)
        {
            int b;
            string s;
            cin >> b >> s;

            int answer = a[i];

            for (char c : s)
            {
                if (c == 'D')
                {
                    answer = (answer + 1) % 10;
                }
                else if (c == 'U')
                {
                    answer = (answer + 9) % 10;
                }
            }

            ans[i] = answer;
        }

        for (int i = 0; i < n; i++)
        {
            cout << ans[i] << " ";
        }
        cout << endl;
    }
    return 0;
}
