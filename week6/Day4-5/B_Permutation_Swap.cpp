#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
     ll t;
    cin>>t;
    while(t--) {
        ll n,a,ans=0;
        cin>>n;
        vector < ll > v;
        for(ll i = 1 ; i <= n ; i++) {
            cin>>a;
            if(abs(a-i)!=0) {
                ans = __gcd(ans,abs(a-i));
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}