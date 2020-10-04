#include <bits/stdc++.h>
using namespace std;

typedef long double ld;
typedef long long int ll;
vector<vector<ll>> adjlist;
ll max(ll x, ll y) { return (x > y) ? x : y; }
ll min(ll x, ll y) { return (x > y) ? y : x; }
#define mod 1000000007
ll cases, n, k, distinct, m, previous, curr;
void solveCase()
{
    cin >> n >> k;
    previous = -1;
    distinct = 0;
    for (ll i = 0; i < n; i++)
    {
        cin >> curr;
        if (previous != curr)
        {
            distinct++;
            previous = curr;
        }
    }
    if (k == 1)
    {
        if (distinct == 1 && curr != 0)
        {
            m = 1;
        }
        else
        {
            m = -1;
        }
    }
    else if (curr == 0)
    {
        m = -1;
    }
    else
    {
        m = 1 + max(0, ceil((distinct - k) / float(k - 1)));
    }
    cout << m << '\n';
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