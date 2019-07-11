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
    vector<ll> pirahnas(n + 2, mod);
    ll maxValue = 0, ans = -1;
    for (ll i = 1; i <= n; i++)
    {
        cin >> pirahnas[i];
        maxValue = max(pirahnas[i], maxValue);
    }
    for (ll i = 1; i <= n; i++)
    {
        if (pirahnas[i] == maxValue)
        {
            if (pirahnas[i - 1] < pirahnas[i])
            {
                ans = i;
                break;
            }
            else if (pirahnas[i + 1] < pirahnas[i])
            {
                ans = i;
                break;
            }
        }
    }
    cout << ans << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> cases;
    for (ll t = 1; t <= cases; t++)
    {
        solveCase(t);
    }
    return 0;
}