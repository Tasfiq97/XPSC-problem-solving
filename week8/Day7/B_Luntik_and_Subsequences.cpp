#include <bits/stdc++.h>
#define ll long long

using namespace std;

void solution()
{
    int n;
    cin >> n;

    vector<int> arr(n);
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    ll numOnes = count(arr.begin(), arr.end(), 1);
    ll numZeros = count(arr.begin(), arr.end(), 0);

    if (numOnes == 0)
        cout << 0 << endl;
    else
        cout << numOnes * (1LL << numZeros) << endl;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solution();
    }
    return 0;
}