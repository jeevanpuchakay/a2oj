#include <bits/stdc++.h>
using namespace std;

typedef long double ld;
typedef long long int ll;
vector<vector<ll>> adjlist;
ll max(ll x, ll y) { return (x > y) ? x : y; }
ll min(ll x, ll y) { return (x > y) ? y : x; }
#define sfor(a, n, i) for (ll i = a; i < n; i++)
#define rfor(n, a, i) for (ll i = n; i >= a; i--)
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
#define vinv vector<vector<ll, ll>>
#define imap map<ll, ll>
#define cmap map<char, ll>
#define smap map<string, ll>
#define iset set<ll>
#define bit(x, i) (x & (1 << i))
int main()
{
    ll a,b,c;
    cin>>a>>b>>c;
    ll count=0,dum=0;
    if(b+c-a<=0){
        dum=a-b-c+1;
        count+=dum;
        if(b>c){
            b+=(dum/2);
            c+=(dum-dum/2);
        }else{
            c+=(dum/2);
            b+=(dum-dum/2);            
        }
    }
    if(a+c-b<=0){
        dum=b-a-c+1;
        count+=dum;
        if(a>c){
            a+=(dum/2);
            c+=dum-(dum/2);
        }else{
            a+=dum-(dum/2);
            c+=(dum/2);
        }
    }
    if(a+b-c<=0){
        dum=c-a-b+1;
        count+=dum;
        if(a>b){
            a+=(dum/2);
            b+=dum-(dum/2);
        }
        else{
            b+=(dum/2);
            a+=dum-(dum/2);
        }
    }
    cout<<count<<endl;
    return 0;
}
