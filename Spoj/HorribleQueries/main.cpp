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
vi inpt;
ll n;
ll a,b,v;
void add(ll l,ll r,ll pos){
    if((r<a)||(b<l)){
        return;
    }
    if(l==r&&(a<=l&&l<=b)){
        inpt[pos]+=v;
        return;
    }
    add(l,(r+l)/2,2*pos);
    add((r+l)/2+1,r,2*pos+1);
    inpt[pos]=inpt[2*pos]+inpt[2*pos+1];
    return;
}

ll sumOfElememnts(ll l,ll r,ll pos){
    if((r<a)||(b<l)){
        return 0;
    }
    if(a<=l&&r<=b)
    return inpt[pos];
    else{
        return sumOfElememnts(l,(r+l)/2,2*pos)+sumOfElememnts((r+l)/2+1,r,2*pos+1);
    }
}

int main()
{
    ll t;
    cin>>t;
    
    while(t--){
        cin>>n;
        inpt =vi(1000009,0);
        ll q;
        cin>>q;
        ll c;//a,b,v;
        sfor(0,q,i){
            cin>>c>>a>>b;
            if(c==0){
                cin>>v;
                add(1,n,1);
            }
            else
            {
                cout<<sumOfElememnts(1,n,1)<<endl;
            }

           // sfor(0,10,i)
            //cout<<inpt[i]<<" ";
            //cout<<endl;
        }
    }
    return 0;
}

/*
1
8 6
0 2 4 26
0 4 8 80
0 4 5 20
1 8 8 
*/