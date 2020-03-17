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
    ll cases;
    cin>>cases;
    sfor(0,cases,t){
        string a,b,c;
        cin>>a>>b>>c;
        ll n=a.sz,count;count=0;ll cap=n;
        sfor(0,n,i){
            if(a[i]!=b[i]){
                if(a[i]!=c[i]&&b[i]!=c[i])
                {
                    count=1;break;
                }
                else{
                    cap--;
                }
            }
            else if(a[i]==c[i]){
                cap--;
            }
        }
        //cap!=0?cout<<"NO":cout<<"YES";
        if(count||cap)
        cout<<"NO";
        else if(!cap){
            cout<<"YES";
        }
        cout<<endl;
    }
    return 0;
}
