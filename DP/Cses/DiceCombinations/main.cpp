#include <bits/stdc++.h>
using namespace std;

typedef long double ld;
typedef long long int ll;
#define endl "\n"
vector<vector<ll>> adjlist;
ll max(ll x, ll y) { return (x > y) ? x : y; }
ll min(ll x, ll y) { return (x > y) ? y : x; }
#define mod 1000000007
ll cases, n;
void solveCase()
{
    cin >> n;
    vector<ll> numWays(n + 10, 0);
    numWays[0] = 0, numWays[1] = 1, numWays[2] = 2, numWays[3] = 1, numWays[4] = 1, numWays[5] = 1, numWays[6] = 1;
    for (ll i = 3; i <= n; i++)
    {
        for (ll j = max(i - 6, 0); j < i; j++)
        {
            numWays[i] += numWays[j];
        }
        numWays[i] %= mod;
    }
    cout << numWays[n] << endl;
}

int main()
{

    // cin >> cases;
    cases = 1;
    for (ll t = 1; t <= cases; t++)
    {
        solveCase();
    }
    return 0;
}