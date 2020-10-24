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
vector<ll> factorial(21, 1);
void solveCase(ll testCaseNum)
{
    cin >> n;
    cout << (factorial[n] / (n * n / 2)) << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    // cin >> cases;
    for (ll i = 1; i <= 20; i++)
    {
        factorial[i] = (i * factorial[i - 1]);
    }
    for (ll t = 1; t <= cases; t++)
    {
        solveCase(t);
    }
    return 0;
}