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
int n,m;
int dfs()
{
    int i,count=0,mark[n]={0};
    for (i = 0; i <adjlist.size(); ++i) {
        if(adjlist[i].size()==1&&(!mark[i]))
        {
            mark[adjlist[i][0]]=1;
            auto it =find(adjlist[adjlist[i][0]].bg,adjlist[adjlist[i][0]].ed,i);
            adjlist[adjlist[i][0]].erase(it);
            adjlist[i].erase(adjlist[i].bg);
            count++;
        }
        mark[i]=1;
    }
    if(count)
        return 1;
    return 0;
}
int main()
{
    cin>>n>>m;
    int a,b,ans=0;
    adjlist=vector<vi >(n);
    sfor(m)
    {
        cin>>a>>b;
        a--;b--;
        adjlist[a].pb(b);
        adjlist[b].pb(a);
    }
    while (1)
    {
        a=dfs();
        if(a)
        {
            ans++;
        }
        else break;
    }
    cout<<ans;
    return 0;
}