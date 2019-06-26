#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
ll const m=1000000007;

int main()
{
   ll x,y,n;
   long long int p;
    cin>>x>>y>>n;
   ll sol[]={x,y,y-x,-x,-y,x-y};
    cout<<(sol[(n-1)%6]%m+m)%m;
    return 0;
}