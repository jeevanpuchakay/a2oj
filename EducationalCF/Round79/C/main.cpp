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
  ll a[1000009],b[1000009],track[1000009];
  ll aindices[1000009];
int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    ll cases;
    cin>>cases;
    while (cases--)
    {
       ll n,m;
       cin>>n>>m;
        
      // vi track(n+1,0);
      track[0]=0;
       sfor(01,n+1,i){
           cin>>a[i];
           aindices[a[i]]=i;
           track[i]=0;
       }
         sfor(01,m+1,i){
           cin>>b[i];
          // aindices[b[i+1]]=i+1;
       }
       ll time=0,last=01;
       
       sfor(1,m+1,i){
           if(track[b[i]])
           {
               time++;continue;
           }
           time+=(2*(aindices[b[i]]-i)+1);
           sfor(last,aindices[b[i]]+1,j)
           track[a[j]]=1;
           last=track[b[i]];
       }
       cout<<time<<endl;
    }
    return 0;
}
