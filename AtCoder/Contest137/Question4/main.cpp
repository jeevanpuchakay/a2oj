#include<bits/stdc++.h>
using namespace std;
vector<vector<int> > adjlist;
#define max(x,y) (x>y)?x:y
#define min(x,y) (x>y)?y:x
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
#define set set<int>
typedef long double ld;
typedef long long int ll;
ll n;
ll work(pair<ll,ll> a[],vi c,ll left)
{
    if(!left)
        return 0;

}
int main()
{
    ll m,p,q;
    cin>>n>>m;
   pair<ll,ll> a[n];
   sfor(n){
   cin>>p>>q;
   a[i]=mp(p,q);
   }
   sort(a,a+n);
    vi h[n]={0};

    return 0;
}