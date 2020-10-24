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
    sum = (n * (n + 1)) / 2;
    if (sum % 2 == 1)
    {
        cout << 0 << endl;
        return;
    }
    sum /= 2;
    vector<vector<ll>> dp(sum + 1, vector<ll>(n + 1, 0));
    // for (ll i = 0; i <= n; i++)
    //     dp[0][i] = 1;
    dp[0][0] = 1;
    for (ll eachSum = 0; eachSum <= sum; eachSum++)
    {
        for (ll i = 1; i < n; i++)
        {
            dp[eachSum][i] += dp[eachSum][i - 1];
            if (eachSum >= i)
                dp[eachSum][i] += dp[eachSum - i][i - 1];
            // dp[eachSum][i] %= mod;
            // if (dp[eachSum][i] > mod)
            // {
            //     dp[eachSum][i] /= 2;
            //     dp[eachSum][i] %= mod;
            //     dp[eachSum][i] *= 2;
            // }
        }
    }
    cout << (dp[sum][n-1] ) % mod << endl;
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