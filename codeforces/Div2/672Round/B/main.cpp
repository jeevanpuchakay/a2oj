#include <bits/stdc++.h>
using namespace std;

typedef long double ld;
typedef long long int ll;
vector<vector<ll>> adjlist;
ll max(ll x, ll y) { return (x > y) ? x : y; }
ll min(ll x, ll y) { return (x > y) ? y : x; }
#define mod 1000000007
ll cases, n, x, bitcount, ans, temp;
void solveCase()
{
    ans = 0;
    cin >> n;
    vector<ll> lastSetBItCount(32, 0);
    for (ll i = 0; i < n; i++)
    {
        cin >> x;
        bitcount = 0;
        while (x != 0)
        {
            bitcount++;
            x /= 2;
        }
        lastSetBItCount[bitcount]++;
    }
    for (ll i = 0; i < 32; i++)
    {
        temp = lastSetBItCount[i];
        if (temp % 2 == 0)
        {
            temp /= 2;
            temp *= (lastSetBItCount[i] - 1);
        }
        else
        {
            temp *= ((lastSetBItCount[i] - 1) / 2);
        }
        ans += (lastSetBItCount[i] * lastSetBItCount[i] - lastSetBItCount[i]) / 2;
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