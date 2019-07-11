#include <bits/stdc++.h>
using namespace std;

typedef long double ld;
typedef long long int ll;
vector<vector<ll>> adjlist;
ll max(ll x, ll y) { return (x > y) ? x : y; }
ll min(ll x, ll y) { return (x > y) ? y : x; }
#define mod 1000000007
ll cases, ans, n, x, y;

void solveCase()
{
    cin >> n;
    vector<ll> inDegree(n, 0);
    for (ll i = 0; i < n - 1; i++)
    {
        cin >> x >> y;
        --x, --y;
        inDegree[y]++;
    }
    ans = 0;
    for (ll i = 0; i < n; i++)
        ans += max(0, inDegree[i] - 1);
    cout << ans << '\n';
}

int main()
{

    cin >> cases;
    for (ll t = 1; t <= cases; t++)
    {
        solveCase();
    }
    return 0;
}