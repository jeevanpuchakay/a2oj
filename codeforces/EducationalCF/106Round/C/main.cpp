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
    vector<ll> costs(n);
    ll leastInOddIdx = 1, leastInEvenIdx = 0, ansOddIdx = 0, ansEvenIdx = 0;
    for (ll i = 0; i < n; i++)
    {
        cin >> costs[i];
        if (i % 2 == 0)
        {
            if (costs[leastInEvenIdx] > costs[i])
                leastInEvenIdx = i;
        }
        else
        {
            if (costs[leastInOddIdx] > costs[i])
                leastInOddIdx = i;
        }
    }
    for (int i = 0; i < leastInEvenIdx; i += 2)
    {
        ansEvenIdx += costs[i];
    }
    for (int i = 1; i < leastInOddIdx; i += 2)
    {
        ansOddIdx += costs[i];
    }
    ansEvenIdx += (n - leastInEvenIdx / 2) * costs[leastInEvenIdx];
    ansOddIdx += (n - leastInOddIdx / 2) * costs[leastInOddIdx];
    cout << ansEvenIdx + ansOddIdx << endl;
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