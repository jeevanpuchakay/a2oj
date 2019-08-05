#include<bits/stdc++.h>

using namespace std;

#define mod 1000000007
#define sfor(n) for(int i=0;i<n;i++)
typedef long double ld;
typedef long long int ll;

ll max(ll x, ll y) {
    return x > y ? x : y;

}

ll min(ll x, ll y) {
    return x > y ? y : x;
}

int main() {
    ll n,m;
    cin>>n>>m;
    ll a[n],b[m];
    int ma=0,mai=0;
    ll mi=mod,mii=0;
    sfor(n){
    cin>>a[i];
    if(mi>a[i])
    {
        mi=a[i];
        mii=i;
    }
    }
    sfor(m){
    cin>>b[i];
        if(ma<b[i])
        {
            ma=b[i];
            mai=i;
        }}
    ll c=n+m-1,p=0;
    sfor(m)
    {
        cout<<mii<<" "<<i<<endl;
    }
    sfor(n)
    {
        if(mi!=a[i])
            cout<<i<<" "<<mai<<endl;
    }
    /*while (c>0&&p<m)
    {
        for(ll i=0;i<n&&c;i++)
        {
            if(!sum[a[i]+b[p]])
            {
                cout<<i<<" "<<p<<endl;
                sum[a[i]+b[p]]++;
                c--;
            }
        }
        p++;
    }*/

    return 0;
}