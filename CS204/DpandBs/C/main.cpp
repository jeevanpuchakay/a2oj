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
vi dp,color;ll q;
ll go(ll n){
    if(n==q){
        return 0;
    }
    if(dp[n]!=-1)
    return dp[n];
    dp[n]=go(n+1)+1;
    auto low=upper_bound(adjlist[color[n]].bg,
    adjlist[color[n]].ed,n)-adjlist[color[n]].bg;
    if(low!=adjlist[color[n]].size())
    dp[n]=min(1+go(adjlist[color[n]][low]),dp[n]);
    return dp[n];

}
int main()
{
    ll cases;
    cin>>cases;
    sfor(0,cases,t){
       ll x;cin>>q;
       dp=vi(q+1,-1);color=vi(q+1,0);
       adjlist=vector<vector<ll>>(200009);
       sfor(0,q,i){
           cin>>x;color[i+1]=x;
           adjlist[x].push_back(i+1);
       }
      // sfor(0,q,i){
//sort(adjlist[i+1].bg,adjlist[i+1].ed,greater<int>());
//cout<<adjlist[i+1][0]<<" ";
       //}
cout<<go(1)<<endl;

    }
    return 0;
}
