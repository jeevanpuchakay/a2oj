#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,t=0,d=0;
    cin>>n;
    int a[n];
    for(i=0;i<n;i++)
        cin>>a[i];
    for(i=0;i<n;i++)
    {
        if(i<2 || a[i]==a[i-1]+a[i-2]) d++;else d=2;
        if(d>t) t=d;
    }
    cout<<t;
    return 0;
}