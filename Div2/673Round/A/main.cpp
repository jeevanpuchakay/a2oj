#include <bits/stdc++.h>
using namespace std;

typedef long double ld;
typedef long long int ll;
vector<vector<ll>> adjlist;
ll max(ll x, ll y) { return (x > y) ? x : y; }
ll min(ll x, ll y) { return (x > y) ? y : x; }
#define mod 1000000007
ll ans, small, cases, n, k, turn;
void solveCase()
{
    cin >> n >> k;
    ll piles[n];
    ans = 0, small = mod;
    for (ll i = 0; i < n; i++)
    {
        cin >> piles[i];
        small = min(small, piles[i]);
    }
    for (ll i = 0; i < n; i++)
    {
        turn = (k - piles[i]) / small;
        ans += max(turn, 0);
    }
    turn = (k - small) / small;
    ans -= turn;
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