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
void solveCase()
{
    cin >> n;
    vector<ll> heights(n + 3), cost(n + 5);
    for (ll i = 0; i < n; i++)
        cin >> heights[i];
    cost[0] = 0, cost[1] = abs(heights[1] - heights[0]);
    for (ll i = 2; i < n; i++)
    {
        cost[i] = min(cost[i - 1] + abs(heights[i] - heights[i - 1]), cost[i - 2] + abs(heights[i] - heights[i - 2]));
    }
    cout << cost[n - 1] << endl;
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