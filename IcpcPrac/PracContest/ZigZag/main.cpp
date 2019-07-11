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
    vector<ll> numbers(n);
    vector<vector<ll>> dp(n, vector<ll>(2, 1));
    for (ll &eachNum : numbers)
        cin >> eachNum;
    for (ll i = 1; i < n; i++)
    {
        for (ll j = 0; j < i; j++)
        {
            if (numbers[j] < numbers[i])
            {
                dp[i][0] = max(dp[i][0], dp[j][1] + 1);
            }
            else if (numbers[j] > numbers[i])
            {
                dp[i][1] = max(dp[i][1], dp[j][0] + 1);
            }
        }
    }
    cout << max(dp[n - 1][1], dp[n - 1][0]) << endl;
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