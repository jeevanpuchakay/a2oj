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
    cin >> n;
    if (n == 0)
    {
        cout << 1 << endl;
        cout << 1 << endl;
        return;
    }
    // cout << n + 1 << " " << n + 2 << endl;
    ll maxA = 99998;
    vector<ll> ans;
    while (n > 0)
    {
        ll leftOver = min(n, maxA);
        ans.push_back(leftOver + 2);
        ans.push_back(leftOver + 1);
        ans.push_back(1);
        n -= leftOver;
    }
    cout << ans.size() << endl;
    for (ll each : ans)
        cout << each << " ";
    cout << endl;
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