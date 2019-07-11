#include <bits/stdc++.h>
using namespace std;

typedef long double ld;
typedef long long int ll;
#define endl "\n"
vector<vector<ll>> adjlist;
ll max(ll x, ll y) { return (x > y) ? x : y; }
ll min(ll x, ll y) { return (x > y) ? y : x; }
#define mod 100000000000007
ll cases = 1, n, sum, m;
ll x, y;
void solveCase()
{
    ll maxW, maxValue = 0;
    cin >> n >> maxW;
    vector<pair<ll, ll>> items(n);
    // vector<vector<ll>> dp(n + 1, vector<ll>(maxW + 1, 0));
    for (ll i = 0; i < n; i++)
    {
        cin >> items[i].first >>
            items[i].second;
        maxValue += items[i].second;
    }
    vector<ll> dp(maxValue + 1, mod);
    dp[0] = 0;
    for (pair<ll, ll> &item : items)
    {
        for (ll i = maxValue; i >= item.second; i--)
        {
            if (dp[i - item.second] + item.first < dp[i])
            {
                dp[i] = dp[i - item.second] + item.first;
            }
        }
    }
    ll ans = 0;
    for (ll i = 0; i <= maxValue; i++)
    {
        if (dp[i] <= maxW)
        {
            ans = max(ans, i);
        }
    }
    cout << ans << endl;
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