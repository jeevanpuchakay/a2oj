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
 ll n,k;

ll bfs(ll i){
    queue<ll> breath;
    vi dist(n,-1);
    breath.push(0);
    dist[0]=0;
    while(breath.empty()!=1){
        ll node=breath.front();
        breath.pop();
        for(auto i: adjlist[node]){
            if(dist[i]!=-1)
            continue;
            dist[i]=dist[node]+1;
            breath.push(i);
        }
    }
    return dist[n-1];
}
int main()
{
    ll cases;
    cin>>cases;
    sfor(0,cases,t){
        cin>>n>>k;
        string s;
        adjlist=vector<vi>(n);
        sfor(0,n,i){
            cin>>s;
            sfor(0,n,j)
            {
                if(s[j]=='1'&&abs(j-i)<=k){
                    adjlist[i].pb(j);
                }
            }
        }
        cout<<bfs(0)<<endl;
    }
    return 0;
}
