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
    ll a[4];
    cin >> a[0] >> a[1] >> a[2] >> a[3];
    for (int i = 0; i < 4; i++)
        sum += a[i];
    sort(a, a + 4);
    bool ans = (a[3] == (sum - a[3])) || (a[3] + a[0] == a[2] + a[1]);
    cout << (ans ? "Yes" : "No") << endl;
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