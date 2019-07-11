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

int Solution::solve(vector<vector<int>> &a)
{

    int n = a.sz;
    int m = a[0].sz;
    vi dp(m, 0);
    int ans = INT_MIN;
    int counter = 0;
    rfor(n - 1, 0, i)
    {
        counter = 0;
        rfor(m - 1, 0, j)
        {
            dp[j] += a[i][j];
            counter+=dp[j];
            ans = max(ans, counter);
        }
    }
    return ans;
}
