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

int main()
{
    ll t;
    cin>>t;
    adjlist = vector<vi>(140);
    adjlist[0].pb(01);
    adjlist[0].pb(02);
    vi a(140);
    a[1]=0,a[2]=0;
    ll k=2;
    while(t--){
        ll n;
        cin>>n;
        while(n>=k){
            ll p=a[k];
            ll si=adjlist[p].sz;
            if(si>1){
                a[++k]=adjlist[p][si-1]-adjlist[p][si-2];
                adjlist[a[k]].pb(k);
            }
            else{
                a[++k]=0;
                adjlist[0].pb(k);
            }
        }
        ll temp=a[n];
        ll count=0;
        for(auto z=adjlist[temp].bg;z!=adjlist[temp].ed&&(*z<=n);z++)
            count++;
        cout<<count<<endl;
    }
    return 0;
}

