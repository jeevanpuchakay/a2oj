#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
char b;
int chec(string s,ll i,ll j)
{

    for (ll k = i; k <=j; ++k) {
        if(b==s[k])
            return 1;
    }
    return 0;
}
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        string inp;
        ll ans=0;
        ll n;
        cin>>n>>inp>>b;
        for (ll i = 0; i <n ; i++) {
            for (ll j = i; j <n ; j++) {
                    ans+=chec(inp,i,j);
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}