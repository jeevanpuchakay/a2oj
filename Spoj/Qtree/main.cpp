
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
vector<pair<ll,ll> >edgs;
ll n,cmax;
ll dfs(ll cur,ll des) {
    ll maxcos=0;
    if(cur==des)
        return 0;
    sfor(1,n+1,i) {
        if(adjlist[cur][i]){
            maxcos=max(maxcos,adjlist[cur][i]);
            if(maxcos==cmax){
                break;
            }
            maxcos=max(dfs(i,des),maxcos);
            if(maxcos==cmax){
                break;
            }
    }
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
        edgs=vector<pair<ll,ll> > (n+1);
        sfor(0,n-1,i)
        {
            cin>>x>>y>>c;
            if(x>y)
                swap(x,y);
            edgs[i+1].first=x;
            edgs[i+1].second=y;
            adjlist[x][y]=c;
            adjlist[y][x]=c;
            cmax=max(cmax,c);
        }
        while(cin>>s,s!="DONE"){
            if(s=="CHANGE")
            {
                cin>>ti>>c;
                x=edgs[ti].first;
                y=edgs[ti].second;
                adjlist[x][y]=c,adjlist[y][x]=c;
                cmax=max(cmax,c);
            }
            else{
                cin>>x>>y;
                ll maxcos=0;
                sfor(1,n+1,i){
                    if(adjlist[x][i]&&x!=i){
                        maxcos=max(maxcos,adjlist[x][i]);
                        maxcos=max(dfs(i,y),maxcos);
                        if(maxcos==cmax){
                            break;
                        }
                        }
                    }
                    cout<<maxcos<<endl;
                }
            }
        }
    return 0;
}
//3
//1 2 1
//2 3 2
//QUERY 1 2
//CHANGE 1 3
//QUERY 1 2
//DONE