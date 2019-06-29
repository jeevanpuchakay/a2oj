#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
ll largest(ll dig,ll sum)
{
    ll num=0;
    if(sum>9*dig||sum==0)
        return -1;
    for (ll i = 0; i <dig; ++i) {
        if(sum-9>=0)
        {
            num=num*10+9;
            sum-=9;
        }
        else if(sum>0)
        {
            num=num*10+sum;
            sum=0;
        } else{
            num=num*10;
        }
    }
    return num;
}
ll lowest(ll dig,ll sum)
{
    if(sum>9*dig||sum==0)
        return -1;
    ll num=0,k=sum-dig+1,i=0,p,x;
    while(i<=7) {
        if((k-i)%8==0)
        {
            p=(k-i)/8;
            break;
        }
        i++;
    }
    x=dig-1-p;
    for (ll j = 0; j <x ; ++j) {
        num=num*10+1;
    }
    num=num*10+i;
    for (ll l = 0; l <p ; ++l) {
        num=num*10+9;
    }
    return num;
}
int main()
{
    ll dig,sum;
    cin>>dig>>sum;
    cout<<lowest(dig,sum)<<" ";
    cout<<largest(dig,sum);
    return 0;
}

