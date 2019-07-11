#include <bits/stdc++.h>
using namespace std;

typedef long double ld;
typedef long long int ll;
vector<vector<ll>> adjlist;
ll max(ll x, ll y) { return (x > y) ? x : y; }
ll min(ll x, ll y) { return (x > y) ? y : x; }
#define mod 1000000007
#define pb push_back
#define in insert
#define mp make_pair
#define inf mod
#define bg begin()
#define ed end()
#define sz size()
#define vi vector<ll>
#define vc vector<char>
#define vinv vector<vector<ll>>
#define sfor(a, n, i) for (ll i = a; i < n; i++)
#define rfor(n, a, i) for (ll i = n; i >= a; i--)


int main()
{
    ll cases,n,x,y,k,c1,c2;
    cin>>cases;
    sfor(0,cases,t){
        cin>>x>>y>>k;
        c1=ceil((k*1.0)/(x-1.0));
        c2=c1*(x-1);
        cout<<c1+y*k<<endl;
    }
    return 0;
}