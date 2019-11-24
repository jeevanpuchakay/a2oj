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
//vector<string> s(10009);
vi bs(10009,0);
int main()
{
    ll t;
    cin>>t;
    while(t--){
        ll n; string x;cin>>n;
        vi a(10,0);
        sfor(0,n,i){
            cin>>x;
            sfor(0,10,j)
            if(x[j]=='1')
            {
                a[j]++;
            }
        }
        ll count=0;
        sfor(0,10,i){
            if(a[i]%2)
                count++;
        }
        cout<<count<<endl;

    }
    return 0;
}

