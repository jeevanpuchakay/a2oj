#include<bits/stdc++.h>
using namespace std;

typedef long double ld;
typedef long long int ll;
vector<vector<int> > adjlist;
#define max(x,y) (x>y)?x:y
#define min(x,y) (x>y)?y:x
#define sfor(n) for(ll i=0;i<n;i++)
#define mod 1000002
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
int main()
{
    ll n;
    cin>>n;
    while(n--){
        ll t;
        cin>>t;
        ll a[t];
        ll right_min=mod;
        ll b=0,count=0;
        sfor(t){
            cin>>a[i];
        }

        for (ll j = t-1; j >=0 ; --j) {
            if(a[j]>right_min)
                count++;
            right_min=min(right_min,a[j]);
        }
        cout<<count<<endl;
    }
    return 0;
}
