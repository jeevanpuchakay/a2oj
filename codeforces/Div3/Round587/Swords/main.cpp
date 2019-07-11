#include<bits/stdc++.h>
using namespace std;

typedef long double ld;
typedef long long int ll;
vector<vector<int> > adjlist;
#define max(x,y) (x>y)?x:y
#define min(x,y) (x>y)?y:x
#define sfor(i,n) for(ll i=0;i<n;i++)
#define mod 1000000007
#define pb push_back
#define in insert
#define mp make_pair
#define inf mod
#define bg begin()
#define ed end()
#define vi vector<int>
#define imap map<ll,ll>
#define smap map<string,ll>
#define iset set<int>
#define bit(x,i) (x&(1<<i))
ll n;
ll gcd(ll a,ll b,ll t,ll c[],ll s){
    if(a==0)
        if(t<n)
        return gcd(b,c[t++]+s*1,t,c,s);
        else
            return b;
            return gcd(b%a,a,t,c,s);

}
int main()
{
    cin>>n;
    ll a[n];
    ll b=0,sum=0;
    sfor(i,n){
        cin>>a[i];
        b=max(b,a[i]);
    }
    sfor(i,n){
        a[i]=b-a[i];
    }
    ll s=0;
    b=gcd(a[0],a[1],2,a,s);
    while(b==1){
        b=gcd(a[0],a[1],2,a,++s);
    }
    sfor(i,n){
        sum+=a[i]+s*1;
    }
    cout<<sum/b<<" "<<b;
    return 0;
}
