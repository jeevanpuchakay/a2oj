#include <bits/stdc++.h>
using namespace std;

typedef long double ld;
typedef long long int ll;
#define endl "\n"
vector<vector<ll>> adjlist;
ll max(ll x, ll y) { return (x > y) ? x : y; }
ll min(ll x, ll y) { return (x > y) ? y : x; }
#define mod 998244353
#define precision(precision) cout << fixed << setprecision(precision)
ll cases = 1, n, sum, m;
ll x, y;
void solveCase()
{
    cin >> n >> m;
    vector<pair<ll, ll>> intervals(m), intervalSet;
    for (ll i = 0; i < m; i++)
        cin >> intervals[i].first >> intervals[i].second;
    sort(intervals.begin(), intervals.end());
    intervalSet.push_back(intervals[0]);
    for (ll i = 1; i < m; i++)
    {
        if (intervalSet.back().second >= intervals[i].first)
        {
            intervalSet.back().second = intervals[i].second;
        }
        else
        {
            intervalSet.push_back(intervals[i]);
        }
    }
    vector<ll> noOfWays(n + 3, 0);
    noOfWays[1] = 1;
    ll cumm = 1;
    for (ll i = 1; i <= n; i++)
    {
        if (i != 2)
            noOfWays[i] += noOfWays[i - 1];
        if (noOfWays[i] == 0)
            continue;
        // if (noOfWays[i] >= mod)
        //     noOfWays[i] -= mod;
        noOfWays[i] %= mod;
        // if (noOfWays[i] <= 0)
        //     cout << i << " ";
        for (pair<ll, ll> &each : intervalSet)
        {
            if (each.first + i <= n)
            {
                noOfWays[i + each.first] += noOfWays[i];
            }
            if (each.second + i + 1 <= n)
            {
                noOfWays[i + each.second + 1] -= noOfWays[i];
            }
        }
    }
    while (noOfWays[n] < 0)
        noOfWays[n] += mod;
    cout << noOfWays[n] % mod << endl;
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