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
    vector<ll> coins(n);
    for (ll &eachCoin : coins)
    {
        cin >> eachCoin;
        sum += eachCoin;
    }
    vector<vector<bool>> possibleSums(n + 9, vector<bool>(sum + 9, false));
    vector<bool> ans(sum + 1, false);
    ll count = 0;
    for (ll i = 0; i <= n; i++)
    {
        possibleSums[i][0] = true;
        // possibleSums[1][coins[i]] = true;
    }
    possibleSums[n][0] = true;
    for (ll i = 0; i < n; i++)
    {
        for (ll j = 0; j <= sum; j++)
        {
            if (i > 0 && possibleSums[i - 1][j])
                possibleSums[i][j] = possibleSums[i - 1][j];
            if (possibleSums[i][j] && (j + coins[i] <= sum))
            {
                possibleSums[i + 1][j + coins[i]] = possibleSums[i][j];
                if (ans[j + coins[i]] == false)
                    ans[j + coins[i]] = possibleSums[i][j], count++;
                // if (j+coins[i] == 12)
                // {
                // cout << i << " " << j << " " << j + coins[i] << endl;
                // }
            }
        }
    }
    cout << count << endl;
    for (ll i = 1; i <= sum; i++)
    {
        if (ans[i])
            cout << i << " ";
    }
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