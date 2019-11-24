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
ll a[100009],b[1000009],c[1000009];
int main()
{
    ll t,n;
    cin>>t;
    while(t--){
        cin>>n;
        memset(b,0,(1000009)* sizeof(ll));
        memset(c,0,(n)* sizeof(ll));
       // cout<<c[n-1];
        sfor(0,n,i){
            cin>>a[i];
            b[a[i]]=i;
        }
        ll ans=0;
        sfor(0,n,i){
            ll sq=sqrt(a[i]);
            sfor(01,sq+1,j){
                if(a[i]%j==0){
                    if(a[i]/j==j){
                        if(b[j]>i){
                            c[b[j]]++;
                        }
                    }
                    else{
                        if(b[j]>i)
                            c[b[j]]++;
                        if(b[a[i]/j]>i)
                            c[b[a[i]/j]]++;
                    }
                }

            }
        }
        sfor(0,n,i)
        ans=max(ans,c[i]);
        cout<<ans<<endl;
    }
    return 0;
}
