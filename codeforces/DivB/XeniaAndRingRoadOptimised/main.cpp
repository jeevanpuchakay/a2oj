#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
    ll n,m,tim=0,x;
    cin>>n>>m;
    ll dat[m];
    for (ll i = 0; i <m ; ++i) {
        cin>>dat[i];
    }
    x=1;
    for (ll j = 0; j <m ; ++j) {
        if(dat[j]>=x)
        {
            tim+=(dat[j]-x);
            x=dat[j];
        }
        else
        {
            tim+=(n-x+dat[j]);
            x=dat[j];
        }
    }
    cout<<tim;
    return 0;
}