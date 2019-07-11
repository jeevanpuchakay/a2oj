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

vector<int> Solution::solve(vector<int> &a, vector<int> &b)
{
    map<ll, ll> hip;
    ll n = a.sz;
    ll big = 0;
    sfor(0, n, i)
    {
        big = max(big, a[i]);
        big = max(b[i], big);
    }
    sfor(0, n, i)
    {
        sfor(0, n, j)
        {
            hip[(a[i] + b[j])]++;
        }
    }
    vector<int> ans;
    for (auto z = hip.ed; z != hip.bg && n; z--)
    {
        z--;
        ll feq = (*z).second;
        ll num = (*z).first;
        sfor(0, feq, i)
        {
            if(!n)break;
            ans.pb(num);
             n--;
        }

        z++;
       
    }
    return ans;
}
