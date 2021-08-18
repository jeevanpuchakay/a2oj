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
bool isPresent(ll n, ll a, ll b)
{
    if (n == 1)
        return true;
    if (n < 1)
        return false;
    bool ans = false;
    if ((n % a == 0) && (a != 1))
    {
        ans = isPresent(n / a, a, b);
    }
    if (ans)
        return ans;
    return isPresent(n - b, a, b);
}
void solveCase(ll testCaseNum)
{
    ll n, a, b;
    cin >> n >> a >> b;
    cout << (isPresent(n, a, b) ? "YES" : "NO") << endl;
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