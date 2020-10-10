#include<bits/stdc++.h>
using namespace std;

typedef long double ld;
typedef long long int ll;
vector<vector<ll> > adjlist;
ll max(ll x,ll y){return (x>y)?x:y;} 
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
#define vinv vector<vector<ll> >
#define imap map<ll,ll>
#define cmap map<char,ll>
#define smap map<string,ll>
#define iset set<ll>
#define bit(x,i) (x&(1<<i))
int main()
{
    ll n,k;
    cin>>n>>k;
    vi a(n);
    sfor(0,n,i)
    cin>>a[i];
    ll ans=0;
    sfor(1,n,i){
        if(a[i-1]+a[i]<k){
            ans+=k-a[i]-a[i-1];
            a[i]+=(k-a[i]-a[i-1]);
        }
    }
    cout<<ans<<endl;
    sfor(0,n,i){
        cout<<a[i]<<" ";
    }
    cout<<endl;
    return 0;
}

