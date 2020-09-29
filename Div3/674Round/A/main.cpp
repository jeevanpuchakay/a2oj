#include <bits/stdc++.h>
using namespace std;

typedef long double ld;
typedef long long int ll;
vector<vector<ll>> adjlist;
ll max(ll x, ll y) { return (x > y) ? x : y; }
ll min(ll x, ll y) { return (x > y) ? y : x; }
#define mod 1000000007
ll x, ans, cases, n;
void solveCase()
{
    cin >> n >> x;
    if (n <= 2)
    {
        ans = 1;
    }
    else
    {
        ans = ((n - 3) / x + 2);
    }
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