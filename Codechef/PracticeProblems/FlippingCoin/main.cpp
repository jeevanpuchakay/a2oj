#include<bits/stdc++.h>
using namespace std;

typedef long double ld;
typedef long long int ll;
vector<vector<ll> > adjlist;
#define max(x,y) (x>y)?x:y
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
#define imap map<ll,ll>
#define cmap map<char,ll>
#define smap map<string,ll>
#define iset set<ll>
#define bit(x,i) (x&(1<<i))

int main()
{
    ll t;
    cin>>t;
    while(t--){
        ll g;
        cin>>g;
        while(g--){
            ll n,i,f;
            cin>>i>>n>>f;
            if(n%2){
                if(f==i){
                    cout<<(n-1)/2<<endl;
                }
                else{
                    cout<<(n+1)/2<<endl;
                }
            }else{
                cout<<n/2<<endl;
            }
        }
    }
    return 0;
}

