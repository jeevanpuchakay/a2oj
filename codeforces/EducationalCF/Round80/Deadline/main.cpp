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
int main()
{
    ll t;cin>>t;
    while(t--){
        ld n,d;
        cin>>n>>d;
        ll start=0;
        ll end=n,mid=n;
        ll x=0;
        sfor(0,n+1,i){
            if(i+ceil(d/(i+1))<=n){
                cout<<"YES "<<endl;
                x=01;
                break;
            }
            
        }
        if(!x){
            cout<<"NO"<<endl;
        }
    }
    return 0;
}

