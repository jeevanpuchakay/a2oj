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

class  klass
{
	public:
	/* data */
	int a;
	klass(int c){
		a=c;
	}
	bool operator >(int c){
		return this->a<c;
	}
};

class comp{
	public:
	bool operator()(klass a,klass b){
		return a.a<b.a;
	}
};

int main()
{
	priority_queue<klass,vector<klass>,comp> ans;
	ans.push( klass(20));
	ans.push( klass(4));
	ans.push( klass(22));
	stack<int> st;
	while(ans.empty()==false){
		cout<<ans.top().a<<" ";
		ans.pop();
	}
	return 0;
}
