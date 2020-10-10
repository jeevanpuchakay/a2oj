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
    ll n,r,l;
    cin>>n>>l>>r;
    ll a=0,b=0,c=0;
    a=pow(2,l);
    a+=n-l-1;
    b=n-r;
    b*=pow(2,r-1);
    b+=pow(2,r)-1;
    cout<<a<<" "<<b;
    return 0;
}