#include <bits/stdc++.h>
using namespace std;

typedef long double ld;
typedef long long int ll;
#define endl "\n"
vector<vector<ll>> adjlist;
ll max(ll x, ll y) { return (x > y) ? x : y; }
ll min(ll x, ll y) { return (x > y) ? y : x; }
#define mod 1000000007
ll cases = 1, n, sum, m;
ll x, y;
void solveCase()
{
    cin >> n;
    vector<ll> a(n), b(n), c(n);
    vector<vector<ll>> ans(n, vector<ll>(3, 0));
    for (ll i = 0; i < n; i++)
        cin >> a[i] >> b[i] >> c[i];
    // for (ll i = 0; i < n; i++)
    //     cin >> b[i];
    // for (ll i = 0; i < n; i++)
    //     cin >> c[i];
    ans[0][0] = a[0], ans[0][1] = b[0], ans[0][2] = c[0];
    for (ll i = 1; i < n; i++)
    {
        ans[i][0] = max(ans[i - 1][2], ans[i - 1][1]) + a[i];
        ans[i][1] = max(ans[i - 1][2], ans[i - 1][0]) + b[i];
        ans[i][2] = max(ans[i - 1][1], ans[i - 1][0]) + c[i];
    }
    cout << max(ans[n - 1][0], max(ans[n - 1][1], ans[n - 1][2])) << endl;
}

int main()
{

    // cin >> cases;
    for (ll t = 1; t <= cases; t++)
    {
        solveCase();
    }
    return 0;
}