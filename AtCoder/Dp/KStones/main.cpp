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
    vector<ll> stones(n);
    for (ll i = 0; i < n; i++)
        cin >> stones[i];
    vector<bool> state(m + 1, false);
    for (ll pile = 0; pile <= m; pile++)
    {
        for (ll stone = 0; stone < n; stone++)
        {
            if (stones[stone] <= pile && (state[pile - stones[stone]] == false))
            {
                state[pile] = true;
            }
        }
    }
    cout << (state[m] ? "First" : "Second") << endl;
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