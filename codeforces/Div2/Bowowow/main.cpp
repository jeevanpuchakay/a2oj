#include<bits/stdc++.h>
using namespace std;
typedef long double ld;
typedef long long int ll;
vector<vector<int> > adjlist;
#define max(x,y) (x>y)?x:y
#define min(x,y) (x>y)?y:x
#define sfor(n) for(ll i=0;i<n;i++)
#define mod 1000000007
#define pb push_back
#define in insert
#define mp make_pair
#define inf mod
#define bg begin()
#define ed end()
#define vi vector<int>
int main()
{
    string s;
    cin>>s;
    ll count=0,n=s.size(),c=0;
    if(s=="0")
    {
        cout<<0;
        return 0;
    }

    int a=0;
    for( ll i = 01; i < n; ++i) {
        if(s[i]=='1')
        {
            a=1;
            break;
        }
    }
    c=n-1;
    if(c%2)
    {
    c/=2;
    c++;
    cout<<c;
    return 0;}
    if(a)
    {
        c/=2;
        cout<<c+1;
        return 0;
    }
    cout<<c/2;
    return 0;
}