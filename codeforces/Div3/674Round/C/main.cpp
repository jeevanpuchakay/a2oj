#include <bits/stdc++.h>
using namespace std;

typedef long double ld;
typedef long long int ll;
vector<vector<ll>> adjlist;
ll max(ll x, ll y) { return (x > y) ? x : y; }
ll min(ll x, ll y) { return (x > y) ? y : x; }
#define mod 1000000007
ll ans, cases, increments, n, peek;
bool flag;
void solveCase()
{
    flag = true;
    ans = 1, peek = 1, increments = 0;
    cin >> n;
    peek = floor(sqrt(n));
    increments = 2 * peek - 2;
    ans = n - peek * peek;
    if (ans != 0 && ans <= peek)
    {
        increments++;
    }
    else if (ans > 0)
    {
        increments += ((ans % peek != 0) + ans / peek);
    }
    cout << increments << '\n';
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