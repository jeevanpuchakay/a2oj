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
    ll cases;
    cin>>cases;
    sfor(0,cases,t){
        ll n;cin>>n;
        char m;
        ll a[5][5];
        memset(a,0,25*sizeof(ll));
        pair<ll,ll> four[5];
        four[4].first=1,four[4].second=0;
        four[1].first=1,four[1].second=0;
        four[2].first=1,four[2].second=0;
        four[3].first=1,four[3].second=0;
        sfor(0,n,i){
            ll x;
            cin>>m>>x;
            a[m-'a'+1][x/3]++;
            sfor(1,5,j){
                if(a[m-'a'+1][x/3]>four[j].second){
                    
                }
            }
        }
    }
    return 0;
}