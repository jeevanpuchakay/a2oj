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
ll n;
string dict[100000 + 9];
ll cost[100000 + 9];
ll dp[100000 + 9][2];
int main()
{
    cin >> n;
    sfor(0, n, i) cin >> cost[i];
    sfor(0, n, i) cin >> dict[i];
    memset(dp, 0, (100000 + 9) * 2);
    dp[0][0] = 0;
    dp[0][1] = cost[0];
    string last = dict[0];
    string rLast = last;
    reverse(rLast.bg, rLast.ed);
    bool lPossible1 = true, rPossible = true;
    sfor(1, n, i)
    {
        bool currentPossible = false, RcurrentPossible = false;
        string temp = dict[i];
        reverse(temp.bg, temp.ed);
        if (lPossible1 && (dict[i] >= last))
        {
            currentPossible = true;
            dp[i][0] = dp[i - 1][0];
        }
        if (rPossible && (dict[i] >= rLast))
        {
            if (currentPossible)
            {
                dp[i][0] = min(dp[i][0], dp[i - 1][1]);
            }
            else
            {
                dp[i][0] = dp[i - 1][1];
            }
            currentPossible = true;
        }
        if (lPossible1 && (temp >= last))
        {
            RcurrentPossible = true;
            dp[i][1] = dp[i - 1][0] + cost[i];
        }
        if (rPossible && (temp >= rLast))
        {
            if (RcurrentPossible)
            {
                dp[i][1] = min(dp[i][1], dp[i - 1][1] + cost[i]);
            }
            else
            {
                dp[i][1] = dp[i - 1][1] + cost[i];
            }
            RcurrentPossible = true;
        }

        lPossible1 = currentPossible;
        rPossible = RcurrentPossible;
        last = dict[i];
        rLast = temp;
        if ((!lPossible1) && (!rPossible))
        {
            cout << -1;
            return 0;
        }
    }
    if (rPossible && lPossible1)
    {
        cout << min(dp[n - 1][0], dp[n - 1][01]);
    }
    else if (rPossible)
    {
        cout << dp[n - 1][1];
    }
    else if (lPossible1)
    {
        cout << dp[n - 1][0];
    }
    else{

    }
    return 0;
}