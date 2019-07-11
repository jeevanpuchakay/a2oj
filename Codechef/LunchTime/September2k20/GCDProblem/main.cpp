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
    ll secondArray[n];
    bool ans = true;
    for (ll i = 0; i < n; i++)
    {
        cin >> secondArray[i];
        ans &= (secondArray[i] <= (i + 1));
        ans &= (((i + 1) % secondArray[i]) == 0);
    }
    ans ? cout << "YES" : cout << "NO";
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