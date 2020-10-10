#include<bits/stdc++.h>
using namespace std;

typedef long double ld;
typedef long long int ll;
vector<vector<ll> > adjlist;
ll max(ll x,ll y){return (x>y)?x:y;} 
//ll min(x,y) {return (x>y)?y:x;}
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
int main()
{
    ll cases;
    cin>>cases;
    string s;ll n;
    sfor(0,cases,t){
        cin>>s;
        n=s.sz;
        if(s[n-1]=='o')
        cout<<"FILIPINO"<<endl;
        else if (s[n-1]=='u')
        cout<<"JAPANESE"<<endl;
        else
        {
            cout<<"KOREAN"<<endl;
        }
    }
    return 0;
}

