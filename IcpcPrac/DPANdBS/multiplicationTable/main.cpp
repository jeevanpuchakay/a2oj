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
    ll n,m,k;
    cin>>n>>m>>k;
    adjlist=vector<vector<ll>>(n,vi(m,0));
    sfor(0,n,i){
        sfor(0,m,j)
        adjlist[i][j]=(i+1)*(j+1);
    }
    ll start=1,end=n*m;
    while(start<end){
        ll mid=(start+end)/2;
        ll count=0;
        sfor(0,n,i){
        sfor(0,m,j){
            if(mid>adjlist[i][j])
            count++;
        }
//        adjlist[i][j]=(i+1)*(j+1);
    }
    if(count<k){
        start=mid+1;
    }
    else if(count>=k){
        end=mid;
    }
    }
    cout<<(start+end)/2<<endl;
    return 0;
}