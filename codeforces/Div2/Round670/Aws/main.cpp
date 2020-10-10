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
    string s,c;
    sfor(0,cases,t){
    cin>>s>>c;
    ll i=0,j=0;
    ll n=s.sz,m=c.sz;
    ll es=0,cs=0;
    while(i<n&&j<m)
    {
        if(s[i]>c[j])
        {
            break;
        }
        else if(s[i]==c[j])
        es++;
        else
        {
            cs=1;
            break;
        }
        i++,j++;
    }
    if(cs){
        cout<<s<<endl;
        continue;
    }
   ll k=i+1;
    while((k<n)&&(s[i]<s[k]))
    k++;
    if(k!=n){
        
    }
    if(i==n){
        if(j!=m){
            cout<<s<<endl;
        }
        else
        {
            cout<<"---"<<endl;
        }
        continue;
    }
    if(j==m){
        if(es!=m){
            cout<<s<<endl;
            continue;
        }
    }

    return 0;
}

