#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
    ll n;
    cin>>n;
    ll a[n];
    ll lisbseq[n];
    for (ll j = 0; j <n ; ++j) {
        lisbseq[j]=1;
        cin>>a[j];
        if(j&&(a[j]>=a[j-1]))
        {
            lisbseq[j]=lisbseq[j-1]+1;
        }
    }
    sort(lisbseq,lisbseq+n,greater<ll>());
    cout<<lisbseq[0];
    return 0;
}