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
#define printTestCaseNum(x) cout << "Case #" << x << ": "
ll cases = 1, n, sum, m;
ll x, y;
void solveCase(ll testCaseNum)
{
    cin >> n >> m;
    ll b[n + 1][m + 1];
    vector<vector<int>> distanceOfPathTakenByRunner(n + 1, vector<int>(m + 1, -1));
    vector<vector<bool>> isPathTakenByRunner(n + 1, vector<bool>(m + 1, false));
    vector<pair<int, pair<int, int>>> distanceOfPaths(n * m);
    ll count = 0;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            cin >> b[i][j];
            distanceOfPaths[count++] = {b[i][j], {i, j}};
        }
    }
    sort(distanceOfPaths.begin(), distanceOfPaths.end());
    for (int i = 0; i < m; i++)
    {
        distanceOfPathTakenByRunner[distanceOfPaths[i].second.first][i + 1] = distanceOfPaths[i].first;
        isPathTakenByRunner[distanceOfPaths[i].second.first][distanceOfPaths[i].second.second] = true;
    }
    for (int i = 1; i <= n; i++)
    {
        count = 1;
        for (int j = 1; j <= m; j++)
        {
            while (count <= m && isPathTakenByRunner[i][count])
                count++;
            if (distanceOfPathTakenByRunner[i][j] != -1)
            {
                continue;
            }
            distanceOfPathTakenByRunner[i][j] = b[i][count];
            count++;
        }
    }
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            cout << distanceOfPathTakenByRunner[i][j] << " ";
        }
        cout << endl;
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    cin >> cases;
    for (ll t = 1; t <= cases; t++)
    {
        solveCase(t);
    }
    return 0;
}