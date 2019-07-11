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
    ll x, pos;
    cin >> n >> x >> pos;
    ll left = 0, right = n, mid, g = 0, l = 0;
    while (left < right)
    {
        mid = (left + right) / 2;
        if (mid <= pos)
        {
            // greaterElement.push_back(mid);
            l++;
            left = mid + 1;
        }
        else
        {
            // lesserElement.push_back(mid);
            g++;
            right = mid;
        }
    }
    ll ans = 1, numerator, denominator;
    // cout << "g= " << g << " l= " << l << endl;
    if (((l - 1) > (x - 1)) || ((n - x) < g) || ((n - l - g) < 0))
    {
        cout << 0 << endl;
        return;
    }
    for (ll i = max(1, x - l + 1); i <= (x - 1); i++)
    {
        ans *= i;
        ans %= mod;
    }
    // cout << ans << endl;
    for (ll i = max(1, n - x - g + 1); i <= n - x; i++)
    {
        ans *= i;
        ans %= mod;
    }
    // cout << ans << endl;
    for (ll i = 1; i <= n - g - l; i++)
    {
        ans *= i;
        ans %= mod;
    }
    cout << ans << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    // freopen("TestCasesInput.txt", "r", stdin);
    // freopen("TestCaseOutput.txt", "w", stdout);
    // cin >> cases;
    for (ll t = 1; t <= cases; t++)
    {
        solveCase(t);
    }
    return 0;
}