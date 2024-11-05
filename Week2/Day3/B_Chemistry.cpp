#include <iostream>
#include <string>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        string s;
        cin >> n >> k;
        cin >> s;
        int frq[26] = {0};
        for (char c : s)
        {
            frq[c - 'a']++;
        }
        int count = 0;
        for (int i = 0; i < 26; i++)
        {
            if (frq[i] % 2 != 0)
            {
                count++;
            }
        }

        int l = n - k;
        if (l < 0)
        {
            cout << "NO" << endl;
        }
        else if ((l % 2 == 0 && count == 0) ||
                 (l % 2 == 1 && count <= 1))
        {
            cout << "YES" << endl;
        }
        else
        {

            int mx = max(0, count - 1);
            if (k >= mx)
            {
                cout << "YES" << endl;
            }
            else
            {
                cout << "NO" << endl;
            }
        }
    }
    return 0;
}
