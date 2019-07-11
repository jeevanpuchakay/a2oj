#include <bits/stdc++.h>
using namespace std;

typedef long double ld;
typedef long long int ll;
#define endl "\n"
vector<vector<ll>> adjlist;
ll max(ll x, ll y) { return (x > y) ? x : y; }
ll min(ll x, ll y) { return (x > y) ? y : x; }
#define mod 1000000007
ll cases = 1, n, sum;
ll x, y;
ll temp, lleft, rright, curr, prev, next;
void solveCase()
{
    ll a[3];
    cin >> a[0] >> a[1] >> a[2];
    lleft = abs(a[0] - a[1]);
    rright = a[0] + a[1];
    curr = lleft + (rright - lleft) / 2;
    lleft = abs(a[2] - curr);
    rright = a[2] + curr;
    cout << lleft + (rright - lleft) / 2 << endl;
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