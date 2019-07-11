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
    ll digit;
    vector<ll> dp(n + 11, mod);
    for (ll i = 1; i <= 9; i++)
        dp[i] = 1;
    dp[0] = 0;
    for (ll i = 10; i <= n; i++)
    {
        digit = 1;
        while ((i / digit) > 0)
        {
            dp[i] = min(dp[i], dp[i - (i / digit) % 10] + 1);
            digit *= 10;
            /* code */
        }
    }
    cout << dp[n] << endl;
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