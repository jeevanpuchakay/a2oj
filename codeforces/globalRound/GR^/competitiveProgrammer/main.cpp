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
int main()
{
    string s;
    ll cases;
    cin>>cases;
    ll sum=0;
    ll n;
    sfor(0,cases,t){
        sum=0;
        cin>>s;
        int flag0=0,flagE=0;
        n=s.sz;
        sfor(0,n,i){
            if(s[i]=='0'){
                flag0++;
            }
            if((s[i]-'0')%2==0){
                flagE++;
            }
            sum+=(s[i]-'0');
        }

        if((sum%3==0)&&(flag0)&&flagE&&(flag0+flagE>2)){
            cout<<"red"<<endl;
        }else{
            cout<<"cyan"<<endl;
        }
    }
    return 0;
}
