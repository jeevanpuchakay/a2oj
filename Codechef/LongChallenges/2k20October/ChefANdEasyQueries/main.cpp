#include <bits/stdc++.h>
using namespace std;

typedef long double ld;
typedef long long int ll;
vector<vector<ll>> adjlist;
ll max(ll x, ll y) { return (x > y) ? x : y; }
ll min(ll x, ll y) { return (x > y) ? y : x; }
#define mod 1000000007
ll k, cases, n, sum, x, ans;
void solveCase()
{
    cin >> n >> k;
    sum = 0, ans = -1;
    for (ll i = 1; i <= n; i++)
    {
        cin >> x;
        sum += x;
        sum -= k;
        if (sum < 0 && ans == -1)
        {
            ans = i;
            sum = 0;
        }
    }
    if (ans == -1)
    {
        ans = n + (sum / k) + 1;
    }
    cout << ans << '\n';
    return;
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