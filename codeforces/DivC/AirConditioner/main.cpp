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
[Test] void solveCase(ll testCaseNum) {
    ll initialTemp, theoreticalLowestPossible, theoreticalhighestPossible;
    bool isPossible = true;
    cin >> n >> initialTemp;
    vector<ll> lowBoundOfTemp(n + 1), upperBoundOfTemp(n + 1), inTimeOfCust(n + 1);
    for (ll i = 1; i <= n; i++)
    {
        cin >> inTimeOfCust[i] >> lowBoundOfTemp[i] >> upperBoundOfTemp[i];
    }
    theoreticalhighestPossible = theoreticalLowestPossible = initialTemp;
    inTimeOfCust[0] = 0;
    for (ll i = 1; i <= n; i++)
    {
        theoreticalhighestPossible += inTimeOfCust[i] - inTimeOfCust[i - 1];
        theoreticalLowestPossible -= inTimeOfCust[i] - inTimeOfCust[i - 1];
        if (theoreticalLowestPossible > upperBoundOfTemp[i])
        {
            isPossible = false;
            break;
        }
        if (theoreticalhighestPossible < lowBoundOfTemp[i])
        {
            isPossible = false;
            break;
        }
        theoreticalLowestPossible = max(theoreticalLowestPossible, lowBoundOfTemp[i]);
        theoreticalhighestPossible = min(theoreticalhighestPossible, upperBoundOfTemp[i]);
    }
    if (isPossible)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
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