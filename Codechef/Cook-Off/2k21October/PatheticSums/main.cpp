#include <bits/stdc++.h>
using namespace std;

typedef long double ld;
typedef long long int ll;
#define endl "\n"
vector<vector<ll>> adjlist;
ll max(ll x, ll y) { return (x > y) ? x : y; }
ll min(ll x, ll y) { return (x > y) ? y : x; }
#define mod 1000000007
#define precision(precision) cout << fixed << setprecision(precision)
ll cases = 1, n, sum, m;
ll x, y;
void dfs(ll pos, int last, vector<int> &visited)
{
    visited[pos] = 1 + (last) % 2;
    for (ll neighbours : adjlist[pos])
    {
        if (visited[neighbours] == 0)
        {
            dfs(neighbours, visited[pos], visited);
        }
    }
    return;
}
void solveCase()
{
    cin >> n;
    adjlist = vector<vector<ll>>(n);
    for (ll i = 1; i < n; i++)
    {
        cin >> x >> y;
        x--, y--;
        adjlist[x].push_back(y);
        adjlist[y].push_back(x);
    }
    vector<int> visited(n, 0);
    dfs(0, 2, visited);
    for (int each : visited)
        cout << each << " ";
    cout << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> cases;
    for (ll t = 1; t <= cases; t++)
    {
        solveCase();
    }
    return 0;
}