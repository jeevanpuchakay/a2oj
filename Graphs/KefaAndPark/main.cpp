#include<bits/stdc++.h>
using namespace std;
vector<vector<int> > adjlist;
#define max(x,y) (x>y)?x:y
#define min(x,y) (x>y)?y:x
#define sfor(n) for(int i=0;i<n;i++)
#define mod 1000000007
#define pb push_back
#define in insert
#define mp make_pair
#define inf mod
#define bg begin()
#define ed end()
#define vi vector<int>
#define map map<int,int>
#define smap map<string,int>
#define set set<int>
typedef long double ld;
typedef long long int ll;
ll n,m;
vi mark;
int dfs(int x,int cat[],int y)
{
    mark[x]=1;
    int count=0;
    if(cat[x])
    {
        y++;
    } else
        y=0;
    if(y>m)
        return 0;
    int a=adjlist[x].size();
    if(a==1&&mark[adjlist[x][0]])
        return 1;
    else
    {
        for (auto i = adjlist[x].bg; i!=adjlist[x].ed ; ++i) {
            if(!mark[*i])
            {

                count+=dfs(*i,cat,y);
            }
        }
    }
    return count;
}
int main()
{
    int a,b,ans=0;
    cin>>n>>m;
    int cat[n];
    mark=vi(n);
    mark[0]=1;
    sfor(n)
    cin>>cat[i];
    adjlist=vector<vi>(n);
    sfor(n-1)
    {
        cin>>a>>b;
        a--;b--;
        adjlist[a].pb(b);
        adjlist[b].pb(a);
    }
    for (auto j = adjlist[0].bg; j !=adjlist[0].ed ; ++j) {
        ans+=dfs(*j,cat,cat[0]);
    }
    cout<<ans;
    return 0;
}