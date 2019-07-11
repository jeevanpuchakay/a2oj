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
    vi input(n);
    sfor(0,n,i)
    cin>>input[i];
    ll counter=0;
    vi track(n+1,0);
    sfor(0,n,i){
        counter+=input[i];
        if(counter<=0)
        {
            cout<<0<<endl;
            return 0;
        }
        track[counter]=1;
    }
    sfor(01,n+1,i)
    {
        if(track[i])
        {cout<<i<<endl;
        break;}

    }
    return 0;
}

