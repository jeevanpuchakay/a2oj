#include<bits/stdc++.h>
using namespace std;

typedef long double ld;
typedef long long int ll;
vector<vector<int> > adjlist;
#define max(x,y) (x>y)?x:y
#define min(x,y) (x>y)?y:x
#define sfor(a,n,i) for(ll i=a;i<n;i++)
#define mod 1000000007
#define pb push_back
#define in insert
#define mp make_pair
#define inf mod
#define bg begin()
#define ed end()
#define vi vector<int>
#define imap map<ll,ll>
#define cmap map<char,ll>
#define smap map<string,ll>
#define iset set<ll>
#define bit(x,i) (x&(1<<i))
ll mini(ll a[],ll i){
    ll q=mod;
    for(ll j=i-1;j>=0&&j>=i-5;j--)
    q=min(q,a[j]);
    return q;
}
int main()
{
    ll t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        ll a[n],count=0;
        sfor(0,n,i)
        cin>>a[i];
        sfor(0,n,i)
        {
            if(a[i]<mini(a,i))
                count++;
        }
        cout<<count<<endl;
    }
    return 0;
}
