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
ll recurseByVaryingCurrTime(ll pos, ll currTime, vector<ll> &optimalCookingTime, vector<vector<ll>> &minUnpleasantValTillI)
{
    if (pos == n)
        return 0;
    if (minUnpleasantValTillI[pos][currTime] != -1)
        return minUnpleasantValTillI[pos][currTime];
    ll ans = INT_MAX, thisIteration;
    for (ll time = currTime; time <= n + pos + 1; time++)
    {
        ans = min(ans, abs(optimalCookingTime[pos] - time) + recurseByVaryingCurrTime(pos + 1, time + 1, optimalCookingTime, minUnpleasantValTillI));
    }
    return minUnpleasantValTillI[pos][currTime] = ans;
}
void solveCase(ll testCaseNum)
{
    cin >> n;
    vector<ll> optimalCookingTime(n);
    vector<vector<ll>> minUnpleasantValTillI(n, vector<ll>(2 * n + 1, -1));
    for (ll i = 0; i < n; i++)
        cin >> optimalCookingTime[i];
    sort(optimalCookingTime.begin(), optimalCookingTime.end());
    cout << recurseByVaryingCurrTime(0, 1, optimalCookingTime, minUnpleasantValTillI) << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    cin >> cases;
    for (ll t = 1; t <= cases; t++)
    {
        solveCase(t);
    }
    return 0;
}