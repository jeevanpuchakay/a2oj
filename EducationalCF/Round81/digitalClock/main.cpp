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
#define vinv vector<vector<ll, ll>>
#define imap map<ll, ll>
#define cmap map<char, ll>
#define smap map<string, ll>
#define iset set<ll>
#define bit(x, i) (x & (1 << i))
string answers[100009];
vi flags(100009,0);

int main()
{
    ll cases;
    cin>>cases;
    answers[2]="1",answers[3]="7",answers[4]="11";
    flags[2]=flags[3]=flags[4]=1;
    sfor(0,cases,t){
        ll n;
        cin>>n;
       
       if(n%2){
           cout<<7;
           sfor(0,(n-3)/2,i)
           cout<<1;
       }
       else{
           sfor(0,(n)/2,i)
           cout<<1;
       }
       cout<<endl;
    }
    return 0;
}
