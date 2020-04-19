#include <bits/stdc++.h>
using namespace std;

typedef long double ld;
typedef long long int ll;
vector<vector<ll>> adjlist;
ll max(ll x, ll y) { return (x > y) ? x : y; }
ll min(ll x, ll y) { return (x > y) ? y : x; }
#define sfor(a, n, i) for (ll i = a; i < n; i++)
#define rfor(n, a, i) for (ll i = n; i >= a; i--)
#define mod 1000000007
#define pb push_back
#define in insert
#define mp make_pair
#define inf mod
#define bg begin()
#define ed end()
#define sz size()
#define vi vector<ll>
#define vc vector<char>
#define vinv vector<vector<ll>>
#define imap map<ll, ll>
#define cmap map<char, ll>
#define smap map<string, ll>
#define iset set<ll>
#define bit(x, i) (x & (1 << i))

vector<bool> visited, recStack;

void dfs(ll node)
{
    if (visited[node] == false)
    {
        visited[node] = true;
        recStack[node] = true;
        for (auto next : adjlist)
        {
            if(visited[next]){

            }
            else
            {
                dfs(next);
            }
            
        }
    }
}

int Solution::solve(int n, vector<int> &pre, vector<int> &post)
{
    adjlist = vector<vector<ll>>(n);
    visited = recStack = vector<bool>(n, false);
    sfor(0, n, i)
    {
        adjlist[pre[i]].pb(post[i]);
    }
    sfor(0, n, i)
    {
        if (!visited[i])
        {
            dfs(i);
        }
    }
}
