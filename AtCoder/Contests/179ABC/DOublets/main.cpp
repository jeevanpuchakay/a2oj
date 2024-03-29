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
    bool ans = false;
    ll streak = 0;
    cin >> n;
    for (ll i = 0; i < n; i++)
    {
        cin >> x >> y;
        if (x == y)
            streak++;
        else
            streak = 0;
        ans |= (streak == 3);
    }
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