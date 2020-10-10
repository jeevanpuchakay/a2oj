#include <bits/stdc++.h>
using namespace std;

typedef long double ld;
typedef long long int ll;
vector<vector<ll>> adjlist;
ll max(ll x, ll y) { return (x > y) ? x : y; }
ll min(ll x, ll y) { return (x > y) ? y : x; }
#define sfor(a, n, i) for (ll i = a; i < n; i++)
#define rfor(n, a, i) for (ll i = n; i >= a; i--)
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
#define vinv vector<vector<ll, ll>>
#define imap map<ll, ll>
#define cmap map<char, ll>
#define smap map<string, ll>
#define iset set<ll>
#define bit(x, i) (x & (1 << i))
int main()
{
    ll n, w;
    cin >> n >> w;
    pair<ll, ll> vw[n + 1];
    vw[0] = {0, 0};
    sfor(01, n + 1, i) cin >> vw[i].first >> vw[i].second;
    // sfor(01, n + 1, i)
    // {
    //     cout << vw[i].first << " " << vw[i].second;
    //     cout << endl;
    // }

    vector<vector<ll>> dp(n + 1, vector<ll>(w + 1, 0));
    sfor(1, w + 1, i)
    {
        sfor(1, n + 1, j)
        {
            if (vw[j].first <= i)
            {
                ll temp = max(dp[j - 1][i], vw[j].second + dp[j - 1][i - vw[j].first]);
                dp[j][i] = temp;
            }
            else{
                dp[j][i]=dp[j-1][i];
            }
        }
    }
    // sfor(0, n + 1, i)
    // {
    //     sfor(0, w + 1, j)
    //     {

    //         cout << dp[i][j] << " "; //= max(dp[j - 1][i], vw[j].second + dp[j - 1][i - vw[j].first]);
    //     }
    //     cout << endl;
    // }
    cout << dp[n][w] << endl;
    return 0;
}