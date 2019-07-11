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
void dfs(ll i, ll j, vector<string> &grid)
{
    if (i < 0 || i >= n || j < 0 || j >= m)
        return;
    if (grid[i][j] != 'L')
        return;
    grid[i][j] = 'I';
    dfs(i, j - 1, grid);
    dfs(i, j + 1, grid);
    dfs(i + 1, j, grid);
    dfs(i - 1, j, grid);
    return;
}

void solveCase()
{
    // cout << "Check0 " << endl;
    cin >> n >> m;
    vector<string> grid(n);
    vector<pair<ll, ll>> clouds;
    ll ans = 0;

    // cout << "Check1 " << endl;
    for (ll i = 0; i < n; i++)
        cin >> grid[i];
    // cout << "Check2 " << endl;
    for (ll i = 0; i < n; i++)
    {
        for (ll j = 0; j < m; j++)
        {
            if ((grid[i][j] == 'C'))
                clouds.push_back({i, j});
        }
    }
    // cout << clouds.size() << endl;
    bool change = true, land;
    while (change)
    {
        change = false;
        for (pair<ll, ll> &eachCloud : clouds)
        {
            land = false;
            if (grid[eachCloud.first][eachCloud.second] != 'C')
                continue;
            if (eachCloud.first > 0 && grid[eachCloud.first - 1][eachCloud.second] == 'L')
            {
                land = true;
            }
            else if (eachCloud.second < m - 1 && grid[eachCloud.first][eachCloud.second + 1] == 'L')
            {
                land = true;
            }
            else if (eachCloud.first < n - 1 && grid[eachCloud.first + 1][eachCloud.second] == 'L')
            {
                land = true;
            }
            else if (eachCloud.second > 0 && grid[eachCloud.first][eachCloud.second - 1] == 'L')
            {
                land = true;
            }
            if (land)
            {
                grid[eachCloud.first][eachCloud.second] = 'L';
                change = true;
            }
        }
    }
    for (ll i = 0; i < n; i++)
    {
        // cout << grid[i] << endl;
        for (ll j = 0; j < m; j++)
        {
            if (grid[i][j] == 'L')
            {
                ans++;
                dfs(i, j, grid);
            }
            // cout<<
        }
    }
    cout << ans << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    // cin >> cases;
    for (ll t = 1; t <= cases; t++)
    {
        solveCase();
    }
    return 0;
}