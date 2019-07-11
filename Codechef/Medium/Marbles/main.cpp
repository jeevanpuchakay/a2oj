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
#define vinv vector<vector<ll>>
#define imap map<ll, ll>
#define cmap map<char, ll>
#define smap map<string, ll>
#define iset set<ll>
#define bit(x, i) (x & (1 << i))

ll permut(ll n,ll m){
     if(m>n-m) m=n-m;
    
    long long ans=1;
    
    for(int i=0;i<m;i++) ans=ans*(n-i)/(i+1);
    
    return ans;
}
int main()
{
    ll cases;
    cin>>cases;
    sfor(0,cases,t){
        ll n,k;
        cin>>n>>k;
        if(k>n){
            cout<<0<<endl;
            continue;
        }
        else if(n==k){
            cout<<1<<endl;continue;
        } 
        cout<<permut(n-1,k-1)<<endl;
    }
    return 0;
}