#include <bits/stdc++.h>
using namespace std;

typedef long double ld;
typedef long long int ll;
vector<vector<ll>> adjlist;
ll max(ll x, ll y) { return (x > y) ? x : y; }
ll min(ll x, ll y) { return (x > y) ? y : x; }
#define mod 1000000007
ll cases, n;
void solveCase()
{
    cin >> n;
    ll ans = 0, last = mod, current;
    for (ll i = 0; i < n; i++)
    {
        cin >> current;
        ans += (last > current);
        last = current;
    }
    ans!=n ? cout << "YES" : cout << "NO";
    cout << '\n';
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