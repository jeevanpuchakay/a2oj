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
int n;
int x;
int main()
{
    ll t,u,v;
    cin>>t;
   while(t--){
       ll k=0,sum=0;
        cin>>n>>x;
        adjlist=vector<vi>[n+1];
        ll wei[n+1];
        sfor(n)
        cin>>wei[i+1];
        sfor(n)
        {
            cin>>u>>v;
            adjlist[u].pb(v);
            adjlist[v].pb(u);
        }
        
    }

    return 0;
}