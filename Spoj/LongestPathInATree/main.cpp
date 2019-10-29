#include<bits/stdc++.h>
using namespace std;

typedef long double ld;
typedef long long int ll;
vector<vector<ll> > adjlist;
ll max(ll x,ll y) {return (x>y)?x:y;}
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
vi dis;
ll n;
ll bfs(ll x){

    vi a(n+1,0);
    queue<ll> q;
    a[x]=1;

    dis[x]=0;
    q.push(x);
    while(!q.empty()){
        ll t=q.front();
        q.pop();
        for(auto w=adjlist[t].bg;w!=adjlist[t].ed;w++){
            if(!a[*w]){
                a[*w]=1;
                q.push(*w);
                dis[*w]=max(dis[*w],dis[t]+1);
            }
        }
    }
    return 0;
}
int main()
{
    ll x,y,ans=0;
    cin>>n;
    adjlist=vector<vi>(n+1);
    sfor(0,n-1,i){
        cin>>x>>y;
        adjlist[x].pb(y);
        adjlist[y].pb(x);
    }
    dis=vi(n+1);
    bfs(1);
    x=0;
sfor(0,n+1,i)
{
    if(dis[i]>ans)
    {
        ans=dis[i];
        x=i;
    }
}
//dis.clear();
sfor(0,n+1,i)
dis[i]=0;
ans=0;
bfs(x);
    sfor(0,n+1,i)
    {
        if(dis[i]>ans)
        {
            ans=dis[i];
            x=i;
        }
    }
    cout<<ans<<endl;
//zdis.bg;


    return 0;
}
