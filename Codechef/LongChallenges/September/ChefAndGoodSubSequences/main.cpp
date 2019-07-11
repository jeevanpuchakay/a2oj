#include<bits/stdc++.h>
using namespace std;

typedef long double ld;
typedef long long int ll;
vector<vector<int> > adjlist;
#define max(x,y) (x>y)?x:y
#define min(x,y) (x>y)?y:x
#define sfor(n) for(ll i=0;i<n;i++)
#define mod 1000000007
#define pb push_back
#define in insert
#define mp make_pair
#define inf mod
#define bg begin()
#define ed end()
#define vi vector<int>
#define imap map<ll,ll>
#define smap map<string,int>
#define iset set<int>
#define bit(x,i) (x&(1<<i))
ll count(ll j){
    if(j==0)
        return 0;
    else
    {
        return j&1+count(j>>1);
    }
}
int main()
{
   ll n,k;
   cin>>n>>k;
   ll a[n];
   imap trk;
   sfor(n){
   cin>>a[i];
   trk[a[i]]++;}
   sort(a,a+n);
   ll c=pow(2,n);
   c-=pow(2,n-k);
   ll ans=0;
    for (ll j = 0; j <=c ; ++j) {
        ll bts=count(j);
        if(bts<=k){
            ll i;
            for(i=0;i<n;i++){
                if(j&1<<i){
                    ll l;
                    for (l = 01; l <trk[a[i]]; ++l) {
                        if(j&1<<(i+l)){
                            if((l!=n-1)&&(a[i+l]==a[i]))
                            break;
                        }
                    }
                    if(l!=trk[a[i]]){
                        break;
                    }
                }
            }
            if(i==n){
            ans++;}
            ans%=mod;
        }
    }
    cout<<ans;
    //<<endl;
    return 0;
}
//5
//3
//2
//2
//3
//3
//5