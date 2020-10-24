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
ll cases = 1, n, sum, m;
ll x, y;
void solveCase()
{
    ll k;
    cin >> n >> k >> x;
    bool ans = false;
    if (n >= k + 1)
    {
        ans = true;
    }
    else if (n % 2 == 1)
    {
        y = (n * n - 1 + 4 * n) / 8;
        if (y >= k)
        {
            ans = true;
        }
    }
    else
    {
        y = (n * n + 2 * n) / 8;
        if (y >= k)
            ans = true;
    }
    cout << (ans ? "YES" : "NO") << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> cases;
    for (ll t = 1; t <= cases; t++)
    {
        solveCase();
    }
    return 0;
}