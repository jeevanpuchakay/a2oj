#include<bits/stdc++.h>
using namespace std;

typedef long double ld;
typedef long long int ll;
vector<vector<ll> > adjlist;
ll max(ll x,ll y){return (x>y)?x:y;} 
ll min(ll x,ll y){return (x>y)?y:x;} 
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
int main()
{
    ll cases;
    cin>>cases;
    sfor(0,cases,t){
        ll n;
        cin>>n;
        string s1,s2;
        cin>>s1>>s2;
        ll a=0,b=0;
        sfor(0,n,i)
        if(s1[i]=='1')
        a++;
        sfor(0,n,i)
        if(s2[i]=='1')
        b++;
        //cout<<min(a,b)<<endl;
        ll maxones=min(a,n-b)+min(n-a,b);
        ll minones=n-min(a,b)-min(n-a,n-b);
        ll ans=0;
       // cout<<"a "<<a<<" b "<<b<<endl<<endl;
        //cout<<"mi "<<minones<<endl<<" ma "<<maxones<<endl;
        sfor(minones,maxones+1,i){
            ll temp=1;
            sfor(i+1,n+1,j)
            temp*=j;
            rfor(n-i,1,j)
            temp/=j;
            ans+=(temp%mod);
            ans%=mod;
            i++;
            //cout<<temp<<" ";
        }
        cout<<ans<<endl;
    }
    return 0;
}

