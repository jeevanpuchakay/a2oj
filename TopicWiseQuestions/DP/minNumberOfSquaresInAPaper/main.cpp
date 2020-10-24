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
ll cutTheRect(ll a, ll b, vector<vector<ll>> &dp)
{

    ll len = min(a, b), breadth = max(a, b), &ans = dp[len][breadth];
    if (ans != -1)
        return ans;
    ans = mod;
    for (ll i = 1; i < len; i++)
    {
        ans = min(ans, cutTheRect(i, breadth, dp) + cutTheRect(len - i, breadth, dp));
    }
    for (ll i = 1; i < breadth; i++)
    {
        ans = min(ans, cutTheRect(len, i, dp) + cutTheRect(len, breadth - i, dp));
    }
    return ans;
}
void solveCase()
{
    cin >> n >> m;
    ll len = min(n, m), breadth = max(n, m);
    vector<vector<ll>> dp(len + 1, vector<ll>(breadth + 1, -1));
    for (ll i = 0; i <= len; i++)
        dp[i][i] = 1;
    for (ll i = 0; i <= breadth; i++)
        dp[0][i] = 0;
    dp[len][breadth] = cutTheRect(len, breadth, dp);
    cout << dp[len][breadth] << endl;
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