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
    cin >> n >> m;
    vector<ll> barrels(n);
    for (ll i = 0; i < n; i++)
        cin >> barrels[i];
    sum = 0;
    sort(barrels.rbegin(), barrels.rend());
    for (ll i = 0; i <= m && i < n; i++)
    {
        sum += barrels[i];
    }
    // sum -= (n - 1 > m ? barrels[n - 1] : 0);
    cout << sum << endl;
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