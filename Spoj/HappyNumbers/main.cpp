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
vi status(mod,-1);
ll eval(ll n){
    ll &temp=status[n];
    if(temp>=0)
    return temp;
    ll sum=0,ncopy=n;
    if(n==1)
    {
        temp=0;
        return 0;
    }
    else if(n/10==0){
        temp=-mod;
        return temp;
    }
    while(ncopy)
    {
        sum+=(ncopy%10)*(ncopy%10);
        ncopy/=10;
    }
    temp=1+eval(sum);
    return temp;
}
int main()
{
    ll n;
    cin>>n;
    ll p=eval(n);
    p>=0?cout<<p:cout<<-1;

    return 0;
}

