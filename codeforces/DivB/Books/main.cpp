#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
    ll n,t,count=0;
    cin>>n>>t;
    ll time[n];
    for (ll i = 0; i < n&&t>0; ++i) {
        cin>>time[i];
        t-=time[i];
        if(t<0)
        {
            t+=time[i];
            continue;
        }
        count++;
    }
   cout<<count;
    return 0;
}

