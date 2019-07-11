#include <bits/stdc++.h>
using namespace std;

typedef long double ld;
typedef long long int ll;
vector<vector<ll>> adjlist;
ll max(ll x, ll y) { return (x > y) ? x : y; }
ll min(ll x, ll y) { return (x > y) ? y : x; }
#define sfor(a, n, i) for (ll i = a; i < n; i++)
#define rfor(n, a, i) for (ll i = n; i >= a; i--)
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
#define imap map<ll, ll>
#define cmap map<char, ll>
#define smap map<string, ll>
#define iset set<ll>
#define bit(x, i) (x & (1 << i))
int main()
{
    long long int c=0,n,i;
	cin>>n;
	long long int x[n+2],h[n+2];
	for(i=1;i<=n;i++)
		cin>>x[i]>>h[i];
	x[0]=-INT_MAX,h[0]=0;
	x[n+1]=INT_MAX,h[n+1]=0;
	for(i=1;i<=n;i++)
		if(x[i]-h[i]>x[i-1]) c++;
		else if(x[i]+h[i]<x[i+1]) c++,x[i]+=h[i];
		else continue;
	cout<<c;
	return 0;
   
}