#include <bits/stdc++.h>
using namespace std;

typedef long double ld;
typedef long long int ll;
vector<vector<ll>> adjlist;
ll max(ll x, ll y) { return (x > y) ? x : y; }
ll min(ll x, ll y) { return (x > y) ? y : x; }
#define mod 1000000007
ll diff, cases, n, k, x, y;
void solveCase()
{
    cin >> n >> k >> x >> y;
    k %= n;
    diff = abs(y - x);
    bool ans = false;
    for (ll i = 0; i < n && ans == false; i++)
    {
        ans |= (diff == (i * k) % n);
    }
    cout << (ans ? "YES" : "NO")<<'\n';
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

