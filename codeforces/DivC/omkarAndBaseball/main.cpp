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
void solveCase(ll testCaseNum)
{
    cin >> n;
    vector<ll> scores(n);
    for (ll &eachScore : scores)
        cin >> eachScore;
    bool zeroOps = true, oneOps = true;
    ll startPosOfUnMatch = n, endPosOfUnMatch = -1;
    for (ll i = 0; i < n; i++)
    {
        if (scores[i] != (i + 1))
        {
            zeroOps = false;
            startPosOfUnMatch = min(startPosOfUnMatch, i);
            endPosOfUnMatch = max(endPosOfUnMatch, i);
        }
    }
    if (zeroOps)
    {
        cout << 0 << endl;
        return;
    }
    for (ll i = startPosOfUnMatch; i <= endPosOfUnMatch; i++)
    {
        if (scores[i] == (i + 1))
        {
            oneOps = false;
        }
    }
    if (oneOps)
    {
        cout << 1 << endl;
    }
    else
    {
        cout << 2 << endl;
    }
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