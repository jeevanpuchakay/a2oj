#include<bits/stdc++.h>
#include <iterator>
using namespace std;
typedef long long int ll;
#define pb push_back
#define mod 1000000007
#define max 100009
vector<vector<int>> flist;
//number of nodes in a connected component
ll componets=0;
int dfs(ll n,int mark[])
{
    mark[n]=1;
    ll cap=1;
    for (auto i = flist[n].begin(); i !=flist[n].end() ; ++i) {
        if(!mark[*i])
            cap+=dfs(*i,mark);
    }
    return cap;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll n,m,a,b;
        cin>>n>>m;
        int mark[n]={0};
        ll totalcaps=1;
        componets=0;
        ll count=0;
        flist=vector<vector<int>> (n);
        for (ll i = 0; i < m; ++i) {
            cin>>a>>b;
            --a;
            --b;
            flist[a].push_back(b);
            flist[b].push_back(a);
        }
        for (ll j = 0; j < n; ++j) {
            if(mark[j])
                continue;
            count=0;
            componets++;
            count+=dfs(j,mark);
            totalcaps=(long long)(totalcaps*count)%mod;
        }
        cout<<componets<<" "<<totalcaps<<endl;
    }
    return 0;
}