#include<bits/stdc++.h>
using namespace std;

typedef long double ld;
typedef long long int ll;
vector<vector<ll> > adjlist;
#define max(x,y) (x>y)?x:y
#define min(x,y) (x>y)?y:x
#define sfor(a,n,i) for(ll i=a;i<n;i++)
#define rfor(n,a,i) for(ll i=n;i>=a;i--)
#define mod 1000000007
#define pb push_back
#define in insert
#define mp make_pair
#define inf mod
#define bg begin()
#define ed end()
#define sz size()
#define vi vector<ll>
#define imap map<ll,ll>
#define cmap map<char,ll>
#define smap map<string,ll>
#define iset set<ll>
#define bit(x,i) (x&(1<<i))


ll a[3];
vi dp(5000,-mod);

ll go(ll n){
    ll &ans=dp[n];
    if(!n)
    return 0;
    if(ans>0)
    return ans;
    if(n<a[2])
    return -mod;
    ans=n/a[2]+go(n%a[2]);
    ans=max(ans,n/a[1]+go(n%a[1]));
    ans=max(ans,n/a[0]+go(n%a[0]));
    return ans;
}

int main()
{
    ll n;
   cin>>n>>a[0]>>a[1]>>a[2];
   if(a[0]<a[1])
   swap(a[0],a[1]);
   if(a[0]<a[2])
   swap(a[0],a[2]);
   if(a[1]<a[2])
   swap(a[1],a[2]);
   ll ans=0;
   dp[n]=go(n);
   cout<<dp[n]<<endl;
    return 0;
}
