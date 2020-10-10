#include <bits/stdc++.h>
using namespace std;

typedef long double ld;
typedef long long int ll;
#define endl "\n"
vector<vector<ll>> adjlist;
ll max(ll x, ll y) { return (x > y) ? x : y; }
ll min(ll x, ll y) { return (x > y) ? y : x; }
#define mod 1000000007
ll cases = 1, n, sum, m, count;
ll x, y;
ll getRank(vector<ll> &rank, ll pos)
{
    while (rank[pos] != -1)
        pos = rank[pos];
    return pos;
}
void solveCase()
{
    cin >> n >> m;
    adjlist = vector<vector<ll>>(n);
    vector<pair<ll, pair<ll, ll>>> edges;
    vector<ll> rank(n, -1);
    for (ll i = 0; i < n; i++)
    {
        for (ll j = 0; j < m; j++)
        {
            /* code */
            cin >> x;
            adjlist[i].push_back(x);
        }
    }
    for (ll i = 0; i < n; i++)
    {
        for (ll j = i + 1; j < n; j++)
        {
            sum = 0;
            for (ll dim = 0; dim < m; dim++)
            {
                sum += abs(adjlist[i][dim] - adjlist[j][dim]);
            }
            edges.push_back({-sum, {i, j}});
        }
    }
    sort(edges.begin(), edges.end());
    sum = 0;
    pair<ll, pair<ll, ll>> edge;
    for (ll i = 0; i < edges.size() && count != n - 1; i++)
    {
        edge = edges[i];
        x = getRank(rank, edge.second.first), y = getRank(rank, edge.second.second);
        if (x == y)
            continue;
        sum += edge.first;
        rank[x] = y;
        count++;
    }
    cout << -sum << endl;
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