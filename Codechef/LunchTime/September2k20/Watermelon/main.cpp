#include <bits/stdc++.h>
using namespace std;

typedef long double ld;
typedef long long int ll;
vector<vector<ll>> adjlist;
ll max(ll x, ll y) { return (x > y) ? x : y; }
ll min(ll x, ll y) { return (x > y) ? y : x; }
#define mod 1000000007
ll cases, n, x, sum;
void solveCase()
{
    cin >> n;
    // bool ans=true;
    sum = 0;
    for (ll i = 0; i < n; i++)
    {
        cin >> x;
        sum += x;
    }
    if (sum < 0)
    {
        cout << "NO" << '\n';
    }
    else
    {
        cout << "YES" << '\n';
    }
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