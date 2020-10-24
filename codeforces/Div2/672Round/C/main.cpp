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
    ll cEvenLen, cOddLen, q, oddLen = -mod, evenLen = 0;
    cin >> n >> q;
    for (ll i = 0; i < n; i++)
    {
        cin >> x;
        cOddLen = oddLen;
        cEvenLen = evenLen;
        oddLen = max(oddLen, cEvenLen + x);
        evenLen = max(cEvenLen, cOddLen - x);
    }
    cout << oddLen << endl;
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