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
    vector<ll> visitedVertices(n);
    for (ll i = 0; i < n; i++)
        cin >> visitedVertices[i];
    ll maxLevel = 1, nodesInPreviousLevel = 1, nodesInThisLevel = 0;
    visitedVertices[0] = mod;
    for (ll i = 1; i < n; i++)
    {
        if (visitedVertices[i - 1] <= visitedVertices[i])
        {
            nodesInThisLevel++;
        }
        else if (nodesInPreviousLevel > 0)
        {
            nodesInPreviousLevel--;
            nodesInThisLevel++;
        }
        else
        {
            maxLevel++;
            nodesInPreviousLevel = nodesInThisLevel - 1;
            nodesInThisLevel = 1;
        }
    }
    cout << maxLevel << endl;
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