#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int n,m,k,tot=0;
int soldier(ll key,ll he)
{
    int count=0,i=0;
    while(count<=k&&i<n)
    {
        if((key&(1<<i))!=(he & 1 << i))
            count++;
        i++;
    }
    if(count>k)
        return 0;
    else
    return 1;
}
int main()
{
    cin>>n>>m>>k;
    ll x[m+1];
    for (int i = 0; i <m+1 ; ++i) {
        cin>>x[i];
    }
    for (int j = 0; j <m; ++j) {
        tot+=soldier(x[j],x[m]);
    }
    cout<<tot;
    return 0;
}