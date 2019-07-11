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
    ll n;
    cin>>n;
    while(n){
        vi a(n),b(n);
        sfor(0,n,i)
        cin>>a[i];
        sfor(0,n,i){
            b[a[i]-1]=i+1;
        }
        b==a?cout<<"ambiguous":cout<<"not ambiguous";
        cout<<endl;
        cin>>n;
    }
    return 0;
}

