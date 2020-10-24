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
void solveCase()
{
    cin >> n;
    vector<string> grid(n);
    for (ll i = 0; i < n; i++)
        cin >> grid[i];
    vector<pair<ll, ll>> ans;
    if (grid[0][1] == '0' && grid[1][0] == '0')
    {
        if (grid[n - 1][n - 2] == '0')
        {
            ans.push_back({n, n - 1});
        }
        if (grid[n - 2][n - 1] == '0')
        {
            ans.push_back({n - 1, n});
        }
    }
    else if (grid[0][1] == '1' && grid[1][0] == '1')
    {
        if (grid[n - 1][n - 2] == '1')
        {
            ans.push_back({n, n - 1});
        }
        if (grid[n - 2][n - 1] == '1')
        {
            ans.push_back({n - 1, n});
        }
    }
    else if (grid[0][1] == '0' && grid[1][0] == '1')
    {
        if (grid[n - 1][n - 2] == '0' && grid[n - 2][n - 1] == '0')
        {
            ans.push_back({1, 2});
        }
        else if (grid[n - 1][n - 2] == '1' && grid[n - 2][n - 1] == '1')
        {
            ans.push_back({2, 1});
        }
        else if (grid[n - 1][n - 2] == '1' && grid[n - 2][n - 1] == '0')
        {
            ans.push_back({n, n - 1});
            ans.push_back({1, 2});
        }
        else
        {
            ans.push_back({1, 2});
            ans.push_back({n - 1, n});
        }
    }
    else if (grid[0][1] == '1' && grid[1][0] == '0')
    {
        if (grid[n - 1][n - 2] == '0' && grid[n - 2][n - 1] == '0')
        {
            ans.push_back({2, 1});
        }
        else if (grid[n - 1][n - 2] == '1' && grid[n - 2][n - 1] == '1')
        {
            ans.push_back({1, 2});
        }
        else if (grid[n - 1][n - 2] == '1' && grid[n - 2][n - 1] == '0')
        {
            ans.push_back({n - 1, n});
            ans.push_back({1, 2});
        }
        else
        {
            ans.push_back({1, 2});
            ans.push_back({n, n - 1});
        }
    }
    cout << ans.size() << endl;
    for (pair<ll, ll> &each : ans)
    {
        cout << each.first << " " << each.second << endl;
    }
}

int main()
{

    cin >> cases;
    for (ll t = 1; t <= cases; t++)
    {
        solveCase();
    }
    return 0;
}