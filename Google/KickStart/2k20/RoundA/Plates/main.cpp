#include <bits/stdc++.h>
using namespace std;

typedef long double ld;
typedef long long int ll;
#define endl "\n"
ll max(ll x, ll y)
{
    return (x > y) ? x : y;
}
ll min(ll x, ll y) { return (x > y) ? y : x; }
#define mod 1000000007
#define precision(precision) cout << fixed << setprecision(precision)
#define printTestCaseNum(x) cout << "Case #" << x << ": "
ll cases = 1, n, sum, m;
ll x, y;
void getMaxBeauty(ll stackPos, ll currBeauty, ll taken, ll &ans, vector<vector<ll>> beautyRows, ll k, ll p)
{
    if (stackPos == n)
    {
        if (taken == p)
        {
            ans = max(ans, currBeauty);
            return;
        }
        return;
    }
    else if((n-stackPos)*k<(p-taken))return ;

    getMaxBeauty(stackPos + 1, currBeauty, taken, ans, beautyRows, k, p);
    for (ll i = 0; i < k && (i + 1 + taken <= p); i++)
    {
        getMaxBeauty(stackPos + 1, currBeauty + beautyRows[stackPos][i], taken + i + 1, ans, beautyRows, k, p);
    }
    return;
}
void solveCase(ll testCaseNum)
{
    ll k, p, temp, ans = 0;
    cin >> n >> k >> p;

    vector<vector<ll>> adjlist = vector<vector<ll>>(n, vector<ll>(k, 0));
    for (ll i = 0; i < n; i++)
    {
        cin >> temp;
        adjlist[i][0] = temp;
        for (ll j = 1; j < k; j++)
        {
            cin >> temp;
            adjlist[i][j] = adjlist[i][j - 1] + temp;
        }
    }
    getMaxBeauty(0, 0, 0, ans, adjlist, k, p);
    printTestCaseNum(testCaseNum) << ans << endl;
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