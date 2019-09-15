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
#define map map<int,int>
#define smap map<string,int>
#define iset set<int>
#define bit(x,i) (x&(1<<i))
int main()
{
    ll t;
    cin>>t;
    while(t--){
        ll n,m,z=0;
        cin>>n>>m;
        ll a,d=n/m;
        ll count=0;
        //int q[20]={0};
            a=m;
            while(a%10){
                z++;
                a+=m;
            }
        z++;
            a=m;
            ll w=d/z;
        for (ll i = 01; i <=z ; ++i) {
            if(i<=(d-w*z))
            count+=(a%10)*(w+1);
            else{
                count+=(a%10)*(w);
            }
            a+=m;
        }
        cout<<count<<endl;
    }
    return 0;
}
