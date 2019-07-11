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
#define vi vector<int>
#define vc vector<char>
#define vinv vector<vector<ll, ll>>
#define imap map<ll, ll>
#define cmap map<char, ll>
#define smap map<string, ll>
#define iset set<ll>
#define bit(x, i) (x & (1 << i))       
 ll n;vi dist,rest;
ll bfs(){
    ll count=0;
    queue<ll> qu;
    qu.push(0);
    //track=vi(n,0);
    dist=vi(n,mod);dist[0]=0;
    while(!qu.empty()){
        ll fo=qu.front();qu.pop();//track[fo]=1;
        if(rest[fo]){
            dist[rest[fo]]=min(dist[rest[fo]],1+dist[fo]);
            qu.push(rest[fo]);
        }
        if(fo+1<n)
        dist[fo+1]=min(1+dist[fo],dist[fo+1]),qu.push(fo+1);
    }
    return dist[n-1];
}vi colors,last;
int main(int argc, char **argv)
{
    ll cases;
    cin >> cases;
    sfor(0, cases, t)
    {
        cin >> n;
         colors=vi(n, 0);rest=vi(n,0),last=vi(200009, 0);
        sfor(0, n, i) cin >> colors[i];
       // adjlist = vector<vector<ll>>(n);
        
        rfor(n - 1, 0, i)
        {
            rest[i]=last[colors[i]];
            last[colors[i]]=i;
        }
        cout<<bfs()<<endl;
    }
    return 0;
}
