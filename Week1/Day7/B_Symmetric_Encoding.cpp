    #include <bits/stdc++.h>
    using namespace std;
    int main()
    {
        int t;
        cin >> t;

        while (t--)
        {
            int n;
            cin >> n;
            string b;
            cin >> b;

            map<char, int> mp;
            for (char ch : b)
            {
                mp[ch]++;
            }
            vector<char> v;
            for (const auto &entry : mp)
            {
                v.push_back(entry.first);
            }
            sort(v.begin(), v.end());

            map<char, char> mp2;
            int len = v.size();
            for (int i = 0; i < len; ++i)
            {
                mp2[v[i]] = v[len - 1 - i];
            }
            string s;
            for (char ch : b)
            {
                s += mp2[ch];
            }

            cout << s << endl;
        }

        return 0;
    }