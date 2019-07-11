#include<bits/stdc++.h>
using namespace std;

typedef long double ld;
typedef long long int ll;
vector<vector<ll> > adjlist;
ll max(ll x,ll y){return (x>y)?x:y;} 
ll min(ll x,ll y){return (x<y)?x:y;} 
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
string s;
ll dp[8009][8009];
ll go(ll i,ll j){
    if(i>=j){
        return 0;
    }
    ll &ans=dp[i][j];
    if(s[i]!=s[j])
    {
        if(ans==-1)
        ans=min(1+go(i+1,j),1+go(i,j-1));
    }
    else{
        if(ans==-1)
        ans= go(i+1,j-1);
    }
    return ans;
}
int main()
{
    ll t;
    cin>>t;
    while(t--){
        cin>>s;
        ll i=0,j=s.sz-1;
        sfor(0,8009,h)
        sfor(0,8009,k)
        dp[h][k]=-1;
        cout<<go(i,j)<<endl;
    }
    return 0;
}

