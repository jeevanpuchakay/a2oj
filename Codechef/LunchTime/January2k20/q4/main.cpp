#include<bits/stdc++.h>
using namespace std;

typedef long double ld;
typedef long long int ll;
vector<vector<ll> > adjlist;
ll max(ll x,ll y){return (x>y)?x:y;} 
#define min(x,y) (x>y)?y:x
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
#define vc vector<char>
#define vinv vector<vector<ll,ll> >
#define imap map<ll,ll>
#define cmap map<char,ll>
#define smap map<string,ll>
#define iset set<ll>
#define bit(x,i) (x&(1<<i))
ll n,m;
vector<vi> dp;
ll go(ll i,ll j){
    if(j>n)
    return 1;
    ll &ans=dp[i][j];
    if(ans!=-1)
    return ans;

    if(j==n)
    {
        if(i==1)
        {
             ans=(m-1)%mod;
             return ans;
        }
        else{
            ans=m%mod;      
           return ans;
//(go(1,j+1)+(((m-1)%mod)*(go(0,j+1)%mod)))%mod;
        }
    }
    if(i==1){
        ans= (((m-1)%mod)*(go(0,j+1)%mod))%mod;
        return ans;
    }
    else{
        ans=((go(1,j+1)%mod)+((m-1)%mod)*(go(0,j+1)%mod))%mod;
        return ans;
    }
}
int main()
{
    ll t;cin>>t;
    while(t--){
        cin>>n>>m;
        dp=vector<vi> (2,vi(n+2,-1));
        cout<<((m%mod)*(go(0,02)%mod))%mod<<endl;
    }
    
    return 0;
}

