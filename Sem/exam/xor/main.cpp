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
ll n;
ll left1,right1;
vi tee,lane;
vector<pair<ll,ll> > track;
void build(ll l,ll r,ll pos){
    if(l==r)
    {
        tee[pos]=lane[l];
        return;
    }
    ll m=(l+r)/2;
    build(l,m,2*pos);
    build(m+1,r,2*pos+1);
    tee[pos]=tee[2*pos+1]+tee[2*pos];
    track[pos].first=l,track[pos].second=r;
    return;
}
void change(ll l,ll r,ll pos,ll x){
    if(track[pos].first>right1||track[pos].second<left1)
    return;
    if(l==r){
        if(r<left1||l>right1){
            return;

        }
    tee[pos]^=x;
    return;
    }
        ll m=(l+r)/2;
    change(l,m,2*pos,x);
    change(m+1,r,2*pos+1,x);
    tee[pos]=tee[2*pos]+tee[2*pos+1];
    return;
}
ll sum(ll l,ll r,ll pos){
    if(track[pos].first>right1||track[pos].second<left1)
    return 0;
    if(track[pos].first>=left1&&track[pos].second<=right1){
        return tee[pos];
    }      
      ll m=(l+r)/2;

    return sum(l,m,2*pos)+sum(m+1,r,2*pos+1);
}
int main()
{
    
    cin>>n;
    tee=vi(3*n,0);
    track=vector<pair<ll,ll> >(3*n);
     lane=vi(n+1,0);
    sfor(0,n,i)
    cin>>lane[i+1];
    ll q,x,t;
    build(1,n,1);
    cin>>q;
    sfor(0,q,i)
    {
        cin>>t;
        if(t==1){
            cin>>left1>>right1>>x;
            change(1,n,1,x);
        }
        else{

            cin>>left1>>right1;
            cout<<sum(1,n,1);
        }
    }
    cout<<endl;
    sfor(0,2*n,i)
    cout<<tee[i]<<" ";
    return 0;
}

