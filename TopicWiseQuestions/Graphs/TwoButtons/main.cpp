#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int max(int x,int y)
{
    return (x>y?x:y);
}
int count(int n,int m)
{
    int c=1;
    if(n<m&&n>1)
    c=c+max(count(n-1,m),count(n*2,m));
    else if(n>m)
        c+=count(n-1,m);
    else if(n==m||n<=0)
        return 0;
    return c;
}
int main()
{
    int n,m;
    cin>>n>>m;
    cout<<count(n,m);
    return 0;
}