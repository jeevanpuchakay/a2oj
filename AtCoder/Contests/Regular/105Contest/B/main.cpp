#include <bits/stdc++.h>
using namespace std;

typedef long double ld;
typedef long long int ll;
#define endl "\n"
vector<vector<ll>> adjlist;
ll max(ll x, ll y) { return (x > y) ? x : y; }
ll min(ll x, ll y) { return (x > y) ? y : x; }
#define mod 1000000007
#define precision(precision) cout << fixed << setprecision(precision)
ll cases = 1, n, sum, m;
ll x, y;
void solveCase()
{
    cin >> n;
    // vector<ll> nums(n);
    // auto comp = [](ll a, ll b) {
    //     return a < b;
    // };
    // priority_queue<ll, vector<ll>, decltype(comp)>
    //     pq(comp);
    // y = mod;
    cin >> x;
    y = x;
    for (ll i = 0; i < n-1; i++)
    {
        cin >> x;
        y = __gcd(x, y);
    }
    cout << y << endl;
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