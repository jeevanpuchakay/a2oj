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
    ll n;cin>>n;
    ll q;cin>>q;
    vi a(n,0),feq(n,0);
    sfor(0,n,i){
        cin>>a[i];
    }
    ll x,y;
    sfor(0,q,i){
        cin>>x>>y;
        x--,y--;
        if(y+1<n){
            feq[y+1]--;
        }
        feq[x]++;
    }
    sfor(1,n,i){
        feq[i]+=feq[i-1];
    }
    sort(a.bg,a.ed);
    sort(feq.bg,feq.ed);
    ll sum=0;
    sfor(0,n,i){
        sum+=((feq[i])*(a[i]));
    }
    cout<<sum;
    return 0;
}