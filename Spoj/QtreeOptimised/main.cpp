
#include<bits/stdc++.h>
using namespace std;

typedef long double ld;
typedef long long int ll;
vector<vector<int> > adjlist;
#define max(x,y) (x>y)?x:y
#define min(x,y) (x>y)?y:x
#define sfor(a,n,i) for(ll i=a;i<n;i++)
#define mod 1000000007
#define pb push_back
#define in insert
#define mp make_pair
#define inf mod
#define bg begin()
#define ed end()
#define vi vector<int>
#define imap map<ll,ll>
#define cmap map<char,ll>
#define smap map<string,ll>
#define iset set<ll>
#define bit(x,i) (x&(1<<i))
map<pair<ll,ll>,ll>grap;
vector<pair<ll,ll>> edg;
ll n,cmax;
ll dfs(ll cur,ll des,vi trc) {
    ll maxcos=0;
    if(cur==des)
        return 0;
    else if(trc[cur])
        return 0;
    for(auto z=adjlist[cur].bg;z!=adjlist[cur].ed;z++){
        trc[*z]=1;
        maxcos=max(maxcos,grap[mp(min(cur,*z),max(cur,*z))]);
        maxcos=max(dfs(*z,des,trc),maxcos);
        if(maxcos==cmax){
            break;
        }
        trc[*z]=0;
    }
    return maxcos;
}
int main()
{
    ll t,x,y,c,ti;
    string s;
    cin>>t;
    while (t--){
        cmax=0,c=0;
        cin>>n;
        adjlist=vector<vi> (n+1);
        edg=vector<pair<ll,ll>> (n+1);
        sfor(0,n-1,i)
        {
            cin>>x>>y>>c;
            if(x>y)
                swap(x,y);
            grap[mp(x,y)]=c;
            edg[i+1]=mp(x,y);
            adjlist[x].pb(y);
            adjlist[y].pb(x);
            cmax=max(cmax,c);
        }
        while(cin>>s,s!="DONE"){
            if(s=="CHANGE")
            {
                cin>>ti>>c;
                x=edg[ti].first;
                y=edg[ti].second;
                grap[mp(x,y)]=c;
                cmax=max(cmax,c);
            }
            else{
                cin>>x>>y;
                ll maxcos=0;
                for(auto z=adjlist[x].bg;z!=adjlist[x].ed;z++){
                    vi trc(n+1);
                    trc[*z]=1;
                    maxcos=max(maxcos,grap[mp(min(x,*z),max(x,*z))]);
                    maxcos=max(dfs(*z,y,trc),maxcos);
                    if(maxcos==cmax){
                        break;
                    }
                }
                cout<<maxcos<<endl;
            }
        }
    }
    return 0;
}
//1
//
//3
//1 2 1
//2 3 2
//QUERY 1 2
//CHANGE 1 3
//QUERY 1 2
//DONE