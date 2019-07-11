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
int pime(ll n){
    if(n%2==0||n%3==0)
    return 0;
    if(n%5==0)
    return 0;
    for (ll i = 5; i * i <= n; i = i + 6) 
        if (n % i == 0 || n % (i + 2) == 0) 
            return 0;
            return 1;
}
int main()
{
    ll cases;
    cin>>cases;
    sfor(0,cases,t){
        ll n;
        cin>>n;
        ll ans=n;
        sfor(2,sqrt(n),i){
            if(n%i==0){
                if(pime(i))
                ans=(ans*i-ans)/i;
                else if(i!=n%i){
                    if(pime(n/i))
                    ans=(ans-(ans*(i)/n));
                }
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}

