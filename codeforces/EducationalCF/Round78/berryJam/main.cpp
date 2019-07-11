#include<bits/stdc++.h>
using namespace std;

typedef long double ld;
typedef long long int ll;
vector<vector<ll> > adjlist;
ll max(ll x,ll y){return (x>y)?x:y;} 
ll min(ll x,ll y) {return (x>y)?y:x;}
#define sfor(a,n,i) for(ll i=a;i<n;i++)
#define rfor(n,a,i) for(ll i=n;i>=a;i--)
#define mod 1000000007
#define pb push_back
#define in insert
#define mp make_pair
#define inf mod
#define bg begin()
#define ed end()
#define sz size()
#define vi vector<ll>
#define vinv vector<vector<ll> >
#define imap map<ll,ll>
#define cmap map<char,ll>
#define smap map<string,ll>
#define iset set<ll>
#define bit(x,i) (x&(1<<i))
vi track; ll n;ll dp[10009][10009];
ll go(ll i,ll j,ll r,ll w){
    if(r==w)
    return j-i-1;
    else if (i<1||j>2*n)
    {
        /* code */
        return mod;
    }
    ll &ans=dp[i][j];
    if(ans!=-1)return ans;
    else
    {
        ans=min(go(i-1,j,track[i]==1?r-1:r,track[i]==1?w:w-1),
        go(i,j+1,track[j]==1?r-1:r,track[j]==1?w:w-1));
    }
    return ans;

}
int main()
{
    ll cases;
    cin>>cases;
    sfor(0,cases,t){
       
        cin>>n;
        memset(dp,-1,10009*10009*sizeof(ll));
        //dp=vector<vi> (n+1,vi(n+1,-1));
       track=vi(2*n+1);
       ll r=0,w=0;
       sfor(1,2*n+1,i)
      {
           cin>>track[i];
           if(track[i]==1)
           r++;
           else
           {
               w++;
           }     
      }
       ll ans=go(n,n+1,r,w);
      ans>=mod?cout<<2*n:cout<<ans;
       cout<<endl;
    }
    return 0;
}

