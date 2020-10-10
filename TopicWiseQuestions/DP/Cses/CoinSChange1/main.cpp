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
// ll getNoOfWays(ll sum, ll pos, vector<ll> &coins, vector<vector<ll>> &dp)
// {
//     if (pos >= n || sum <= 0)
//         return sum == 0;
//     if (dp[sum][pos] != -1)
//         return dp[sum][pos];
//     return dp[sum][pos] = getNoOfWays(sum - coins[pos], pos, coins, dp) + getNoOfWays(sum, pos + 1, coins, dp);
// }
void solveCase()
{
    cin >> n >> m;
    vector<ll> coins(n), noOfWay(m + 1, 0);
    for (ll &each : coins)
        cin >> each;
    sort(coins.begin(), coins.end());
    noOfWay[0] = 1;
    for (ll i = 1; i <= m; i++)
    {
        for (ll j = 0; j < n && coins[j] <= i; j++)
        {
            noOfWay[i] += noOfWay[i - coins[j]];
            noOfWay[i] %= mod;
        }
    }
    cout << noOfWay[m] << endl;
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