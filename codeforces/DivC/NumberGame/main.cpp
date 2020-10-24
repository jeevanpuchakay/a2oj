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
bool stateOfN(ll state)
{
    if (state == 1)
        return false;
    if (state == 2)
        return true;
    if (state % 2 == 1)
        return true;
    else if ((state & (state - 1)) == 0)
        return false;
    else if (state % 4 == 0)
        return true;
    else
        return true;
}
void solveCase(ll testCaseNum)
{
    cin >> n;
    cout << (stateOfN(n) ? "Ashishgup" : "FastestFinger") << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> cases;
    for (ll t = 1; t <= cases; t++)
    {
        solveCase(t);
    }
    return 0;
}