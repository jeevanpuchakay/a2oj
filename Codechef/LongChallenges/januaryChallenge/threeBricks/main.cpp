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
ll a[3],s;

ll go(ll i, ll j,ll strenth){
    if(strenth>0){
        
    }
}
int main()
{
    ll cases;
    cin>>cases;
    sfor(0,cases,t){
        cin>>s>>a[0]>>a[1]>>a[2];
       // cout<<go(0,2,s);
       ll i=0,j=2,count=0;
       while(i<=j){
           ll q=0,m=0,strenth=s;
           while(i+q<=j){
               if(a[i+q]<=strenth)
               strenth-=a[i+q],q++;
               else
               {
                   break;
               }
           }
           ll w=0;strenth=s;
           while (j-w>=i)
           {
               
               if(a[j-w]<=strenth)
               strenth-=a[j-w],w++;
               else
               {
                   break;
               }
               
           }
           if(q>=w){
               i=i+q;
               count++;
           }
           else{
               j=j-w;
               count++;
           }

       }
       cout<<count<<endl;
    }
    return 0;
}

