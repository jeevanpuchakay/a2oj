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
vi denominations, track, ans;
ll m, n, x;
ll num = 0;
ll go(ll j,ll soFar)
{
    if (j == n)
        return 0;
    track[j] = 1;
    x = denominations[j] + go(j,1);
    if(x>m){
        
    }
    if ((!j) && (num < x))
    {
        ans = track;
        num = x;
    }
    track[j] = 0;
    if (x > m)
        return m + 1;
    x = max(x, go(j + 1,1));
    if ((!j) && (num < x) && (x <= m))
    {
        ans = track;
        num = x;
    }
    if (x > m)
        return m + 1;
    return x;
}
int main()
{
    cin >> m >> n;
    denominations = vi(n, 0);
    sfor(0, n, i)
    {
        cin >> x;
        denominations[i] = x;
    }
    track = vi(n, 0);
    go(0,0);
    ll q=(ans.size());
    cout<<q<<endl;
     sfor(0,n,i){
       if(ans[i])cout<<i<<" ";}
       //cout<<ans[i]<<" ";
    //}
    return 0;
}
