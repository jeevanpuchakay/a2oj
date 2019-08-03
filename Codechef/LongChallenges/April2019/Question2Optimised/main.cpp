#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
char b;
ll eval(ll n)
{
    ll tot=n*(n+1);
    return (tot/=2);
}
vector<ll> find(vector<ll> pos,string inp,ll n)
{
    for (ll i = 0; i < n; ++i) {
        if(b==inp[i])
            pos.push_back(i);
    }
    return pos;
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
        ll tot =eval(n);
        vector<ll> pos;
        pos=find(pos,inp,n);
        for (ll i = 0; i <pos.size() +1; ++i) {
            if(!i)
            {
                ans+=eval(pos[0]);
            }
            else
            {
                ans+=eval(pos[i]-pos[i-1]-1);
            }
        }
        cout<<tot-ans<<endl;
    }
}