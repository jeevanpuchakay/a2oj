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
    ld ma = 0, eu = 0;
    ll ch = 0;
    cin >> x;
    ma += abs(x);
    eu += x * x;
    ch = abs(x);
    for (ll i = 1; i < n; i++)
    {
        cin >> x;
        ma += abs(x);
        eu += x * x;
        ch = max(abs(x), ch);
    }
    eu = sqrt(eu);
    cout << ma << " ";
    precision(15) << eu;
    cout << " " << ch;
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