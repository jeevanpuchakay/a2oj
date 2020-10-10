#include<bits/stdc++.h>
using namespace std;

typedef long double ld;
typedef long long int ll;
vector<vector<ll> > adjlist;
ll max(ll x,ll y){return (x>y)?x:y;} 
ll min(ll x,ll y) {return (x>y)?y:x;}
#define sfor(a,n,i) for(ll i=a;i<n;i++)
#define rfor(n,a,i) for(ll i=n;i>=a;i--)
#define mod 1000000007
#define pb push_back
#define in insert
#define mp make_pair
#define inf mod
#define bg begin()
#define ed end()
#define sz size()
#define vi vector<ll>
#define vinv vector<vector<ll> >
#define imap map<ll,ll>
#define cmap map<char,ll>
#define smap map<string,ll>
#define iset set<ll>
#define bit(x,i) (x&(1<<i))
ll l=0;
string s,c;
int main()
{
    ll cases,ans=0;
    cin>>cases;
    sfor(0,cases,t){
        l=0;
        ll x;
        cin>>x;
        cin>>s;
        c="";ans=0;
        while(l!=x){
            l++;
            c=s.substr(l);
            s=s.substr(0,l);
            ll temp=s[l-1]-'0';
            while(temp--)
            {
                s+=c;
            }
        }
        cout<<s.size()%mod<<endl;
    }
    return 0;
}

