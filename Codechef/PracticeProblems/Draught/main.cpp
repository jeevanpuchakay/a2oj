//incomplete
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define pb push_back
vector<vector<int>> adjlist;
ll kount=0;
void FindAndDelete(int n,int x)
{
    for (auto i =adjlist[n].begin(); i !=adjlist[n].end() ; ++i) {
        if(*i==x)
        {
            adjlist[n].erase(i);
            return;
        }
    }
}
void dfs(int n,int windows[])
{
    for (auto i=adjlist[n].begin();i!=adjlist[n].end();i++)
    {
        if(windows[*i])
        {
            kount++;
            FindAndDelete(*i,n);
            dfs(*i,windows);
        }
    }
    return;
}
int main()
{
    ll n,m,a,b,atleast=0;
    cin>>n>>m;
    adjlist=vector<vector<int>> (n);
    int windows[n],mark[n]={0};
    for (int i = 0; i < n; ++i) {
        cin>>windows[i];
    }
    for (int j = 0; j <m ; ++j) {
        cin>>a>>b;
        a--;b--;
        adjlist[a].pb(b);
        adjlist[b].pb(a);
    }
    for (int i = 0; i < n; ++i) {
        if (mark[i]||!windows[i])
        {
            if(windows[i])
                atleast++;
            continue;
        }
        mark[i]=1;
        for (auto j = adjlist[i].begin(); j !=adjlist[i].end() ; ++j) {
            if(windows[*j])
            {
                atleast++;
                mark[*j]=1;
                break;
            }
        }
    }
    for (int i = 0; i < n; ++i) {
         if(windows[i])
             dfs(i,windows);
    }
    cout<<kount<<" "<<atleast;
    return 0;
}

