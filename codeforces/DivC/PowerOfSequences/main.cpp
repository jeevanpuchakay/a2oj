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
    vector<ll> givenNumbers(n);
    for (ll &eachNum : givenNumbers)
        cin >> eachNum;
    ll start = 1, end = 1e9, mid, ans = 1e18, costForCurr = 0, currPower;
    while (start <= end)
    {
        mid = start + (end - start) / 2;
        currPower = 1;
        costForCurr = 0;
        for (ll i = 0; i < n; i++)
        {
            costForCurr += abs(currPower - givenNumbers[i]);
            currPower *= mid;
        }
        if (costForCurr < ans)
        {
            end = mid - 1;
            ans = costForCurr;
        }
        else
        {
            start = mid + 1;
        }
    }
    cout << ans << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    // cin >> cases;
    for (ll t = 1; t <= cases; t++)
    {
        solveCase(t);
    }
    return 0;
}