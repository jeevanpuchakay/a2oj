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
ll dp[3509][3509][3509];
ll a[3509];ll n,m,k;;
ll go(ll i,ll j,ll k,ll pos){
    if(pos==m)
    return min(a[i],a[j]);
    if(i>n-1||j<0||i>j)return mod;
    ll &ans=dp[i][j][k];
    if(ans)
    return ans;
    ll one=min(go(i+1,j,k-1,pos+1),go(i,j-1,k-1,pos+1));
    ll two=min(go(i+1,j,k,pos+1),go(i,j-1,k,pos+1));
    ans=min(one,two);
    return ans;
}
int main()
{
    ll cases;
    cin>>cases;
    sfor(0,cases,tata){
        
        cin>>n>>m>>k;memset(dp,0,3509*3509*3509*sizeof(ll));
        sfor(0,n,i)
        cin>>a[i];
        cout<<go(0,n-1,k,1)<<endl;
    }
    return 0;
}
