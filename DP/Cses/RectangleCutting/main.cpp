#include <bits/stdc++.h>
using namespace std;

typedef long double ld;
typedef long long int ll;
#define endl "\n"
vector<vector<ll>> adjlist;
ll max(ll x, ll y) { return (x > y) ? x : y; }
ll min(ll x, ll y) { return (x > y) ? y : x; }
#define mod 1000000007
ll cases = 1, n, sum, m;
ll x, y;
void solveCase()
{
    cin >> x >> y;
    if (x < y)
        swap(x, y);
    sum = 0;
    while (y != 0)
    {
        sum += x / y;
        n = y;
        y = x % y;
        x = n;
    }
    cout << sum - 1 << endl;
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