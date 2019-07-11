#include <bits/stdc++.h>
using namespace std;

typedef long double ld;
typedef long long int ll;
vector<vector<ll>> adjlist;
ll max(ll x, ll y) { return (x > y) ? x : y; }
ll min(ll x, ll y) { return (x > y) ? y : x; }
#define mod 1000000007
#define pb push_back
#define in insert
#define mp make_pair
#define inf mod
#define bg begin()
#define ed end()
#define sz size()
#define vi vector<ll>
#define vc vector<char>
#define vinv vector<vector<ll>>
#define sfor(a, n, i) for (ll i = a; i < n; i++)
#define rfor(n, a, i) for (ll i = n; i >= a; i--)

int main()
{
    ll cases, n, ans = 0, low, sum, high, a;
    cin >> cases;
    sfor(0, cases, t)
    {
        cin >> n;
        ans = 0;
        sum = (n * n + n) / 2;
        if (sum % 2 == 1)
        {
            cout << 0 << '\n';
            continue;
        }
        else
        {
            low = floor((sqrt(1.00 + 4.00 * sum) - 1) / 2);
            ans += (n - low);
            if ((low * low + low) == sum)
            {
                ans += (low * low - low) / 2;
                ans += ((n - low) * (n - low) - (n - low)) / 2;
            }
        }
        // cout << '\n';
        cout << ans << '\n';
    }
    return 0;
}