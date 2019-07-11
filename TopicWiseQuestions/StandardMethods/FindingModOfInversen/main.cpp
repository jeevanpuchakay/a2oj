#include<bits/stdc++.h>
using namespace std;

typedef long double ld;
typedef long long int ll;
vector<vector<int> > adjlist;
#define max(x,y) (x>y)?x:y
#define min(x,y) (x>y)?y:x
#define sfor(a,i,n) for(ll i=a;i<n;i++)
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
// xn-yk=1
//(1/k)%n
ll findNinverseModN(ll n,ll k){
     ll x=1,y=(n*x)/k;
     while(x*n-y*k!=1)
     {
         x++,y=(n*x)/k;
     }
    return (-y+y*n)%n;
}
int main()
{
    ll n,k;
    cin>>n>>k;
    cout<<findNinverseModN(n,k);
    return 0;
}
