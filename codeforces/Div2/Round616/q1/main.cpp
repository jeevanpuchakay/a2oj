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
        ll n;cin>>n;
        string s;cin>>s;
        ll o=0,e=0;
        sfor(0,n,i)
        if((s[i]-'0')%2)
        o++;
        else
        {
            e++;
        }
        if(e==n||n==1)
        {cout<<-1<<endl;continue;}
        ll a=-1;
        ll last=n-1;
        while(last>0&&(s[last]-'0')%2==0){
            last--,e--;
        }
        ll lastcopy=last;
        while (o%2!=0)
        {
            /* code */
            if((s[lastcopy]-'0')%2)
            {a=lastcopy;break;}
            lastcopy--;e--;
        }
        if(a!=-1){
            sfor(0,last+1,i){
                if(i!=a)
                cout<<s[i];
            }
        }
        else{
            sfor(0,last+1,i){
                //if(i!=a)
                cout<<s[i];
            }
        }
        cout<<endl;
    }
    return 0;
}
