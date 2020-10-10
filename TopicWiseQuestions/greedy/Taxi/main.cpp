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
#define vinv vector<vector<ll> >
#define imap map<ll,ll>
#define cmap map<char,ll>
#define smap map<string,ll>
#define iset set<ll>
#define bit(x,i) (x&(1<<i))
int main()
{
    ll n;
    cin>>n;
    vi a(n,0);
    sfor(0,n,i)
    cin>>a[i];
    vi feq(4,0);
    ll ans=0;
    sfor(0,n,i){
        if(a[i]==4)
        ans++;
        else if(feq[4-a[i]]>0)
        {
            ans++;
            feq[4-a[i]]--;
        }
        else
        {
            feq[a[i]]++;
        }
    }
    if(feq[3]>0)
    {
        if(feq[3]>=feq[1])
        {
            ans+=feq[3];
            feq[1]=0;
        }
        else
        {
            ans+=feq[3];
            feq[1]-=feq[3];
        }
        
    }
    if(feq[2]>0){
        if(feq[2]%2==0)
        {
            ans+=feq[2]/2;
            feq[2]=0;
        }
        else{
            ans+=feq[2]/2;
            feq[2]=1;
        }
    }
    if(feq[2]){
        ans+=((2+feq[1])/4)+((2+feq[1])%4>0?1:0);
    }
    else{
        ans+=((feq[1])/4)+((feq[1])%4>0?1:0);
    }
    cout<<ans<<endl;
    return 0;
}

