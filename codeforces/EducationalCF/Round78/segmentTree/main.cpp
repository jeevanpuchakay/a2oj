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
vi mark(1000009,0);
void dfs(ll i){
    if(mark[i])
    return;
    mark[i]=1;
    for(auto z=adjlist[i].bg;z!=adjlist[i].ed;z++)
    {
        dfs(*z);
    }
    return;
}
int main()
{
    ll n;
    cin>>n;
    pair<ll,ll> a[n];
    ll x,y;
    adjlist=vinv(n);
    sfor(0,n,i){
        cin>>x>>y;
        x--,y--;
        a[i].first=x,a[i].second=y;
    }
    sfor(0,n,i){
        x=a[i].first,y=a[i].second;
        sfor(i+1,n,j){
            if(i!=j){
                if(y<a[j].first||x>a[j].second){
                   continue;
                }
                else if((x<a[j].first&&a[j].second<y)||(a[j].first<x&&y<a[j].second)){
                    continue;
                }
                else{
                     adjlist[i].pb(j);
                    adjlist[j].pb(i);
                }
            }
        }
    }
   
    dfs(0);
    sfor(0,n,i)
    {
                    cout<<mark[i]<<" ";

        if(!mark[i]){
            //cout<<"NO"<<endl;
            //return 0;
        }
    }
    cout<<"YES"<<endl;
    return 0;
}

