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
    cin >> n;
    ll coins[n][n], ans = 0, upperMatrix = 0, lowerMatrix = 0;
    for (ll i = 0; i < n; i++)
        for (ll j = 0; j < n; j++)
            cin >> coins[i][j];
    for (ll i = 0; i < n; i++)
    {
        x = i, y = 0;
        upperMatrix = lowerMatrix = 0;
        while (x < n && y < n)
        {
            upperMatrix += coins[x][y];
            lowerMatrix += coins[y][x];
            x++, y++;
        }
        ans = max(upperMatrix, ans);
        ans = max(lowerMatrix, ans);
    }
    printTestCaseNum(testCaseNum) << ans << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> cases;
    for (ll t = 1; t <= cases; t++)
    {
        solveCase(t);
    }
    return 0;
}