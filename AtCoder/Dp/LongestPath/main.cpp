#include <bits/stdc++.h>
using namespace std;

typedef long double ld;
typedef long long int ll;
#define endl "\n"
vector<vector<ll>> adjlist;
ll max(ll x, ll y) { return (x > y) ? x : y; }
ll min(ll x, ll y) { return (x > y) ? y : x; }
#define mod 1000000007
ll cases = 1, n, sum, m;
ll x, y;
ll dfs(vector<ll> &Node_depth, ll node)
{
    Node_depth[node] = 0;
    for (ll neighbour : adjlist[node])
    {
        if (Node_depth[neighbour] != -1)
        {
            Node_depth[node] = max(Node_depth[node], 1 + Node_depth[neighbour]);
        }
        else
        {
            Node_depth[node] = max(Node_depth[node], 1 + dfs(Node_depth, neighbour));
        }
    }
    return Node_depth[node];
}
void solveCase()
{
    cin >> n >> m;
    adjlist = vector<vector<ll>>(n);
    for (ll i = 0; i < m; i++)
    {
        cin >> x >> y;
        x--, y--;
        adjlist[x].push_back(y);
        // adjlist[y].push_back(x);
    }
    vector<ll> Node_depth(n, -1);
    stack<pair<ll, ll>> recurse;
    pair<ll, ll> node;
    for (ll i = 0; i < n; i++)
    {
        if (Node_depth[i] != -1)
            continue;
        Node_depth[i] = dfs(Node_depth, i);
    }
    ll ans = 0;
    for (ll depth : Node_depth)
    {
        ans = max(ans, depth);
    }
    cout<<ans<<endl;
}

int main()
{

    // cin >> cases;
    for (ll t = 1; t <= cases; t++)
    {
        solveCase();
    }
    return 0;
}