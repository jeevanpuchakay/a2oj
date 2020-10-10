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
    cin >> n >> sum;
    vector<pair<ll, ll>> bookProps(n + 1);
    vector<vector<ll>> maxPagesWithPriceI(n + 1, vector<ll>(sum + 1, 0));
    for (ll i = 1; i <= n; i++)
    {
        cin >> bookProps[i].first;
    }
    for (ll i = 1; i <= n; i++)
    {
        cin >> bookProps[i].second;
    }
    for (ll i = 1; i <= n; i++)
    {
        for (ll j = 1; j <= sum; j++)
        {
            if (bookProps[i].first <= j)
            {
                maxPagesWithPriceI[i][j] = bookProps[i].second + maxPagesWithPriceI[i - 1][j - bookProps[i].first];
            }
            maxPagesWithPriceI[i][j] = max(maxPagesWithPriceI[i - 1][j], maxPagesWithPriceI[i][j]);
            // cout << "idxs: " << i << " " << j << endl;
        }
        // cout << endl;
    }
    cout << maxPagesWithPriceI[n][sum] << endl;
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