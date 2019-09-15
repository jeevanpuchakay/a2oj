#include<bits/stdc++.h>
using namespace std;

typedef long double ld;
typedef long long int ll;
vector<vector<int> > adjlist;
#define max(x,y) (x>y)?x:y
//#define min(x,y) (x>y)?y:x
#define sfor(n) for(int i=0;i<n;i++)
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
ll min(ll x,ll y){
    return x>y?y:x;
}
int main()
{
    ll n;cin>>n;
    ll sum=0;

    ll a[n];
    sfor(n){
        cin>>a[i];
        sum+=a[i];
    }
    ll m=sum/n,m0=m-1,m1=m+1;
    ll c=0,c0=0,c1=0;
    sfor(n){
            if((a[i]-m)%2)
                c++;
            if((a[i]-m0)%2)
                c0++;
            if((a[i]-m1)%2)
                c1++;
    }
    ll b=min(c,min(c0,c1));
    //cout<<c<<" "<<c0<<" "<<c1<<" ";
    cout<<b;

    return 0;
}
