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
ll n,m;
 string temp,s,h;
ll func(ll i){
    ll j=i;
   // cout<<temp<<" func"<<endl;
    while(j-i<n){
        if(temp[j]!=s[j-i])
        {
            //cout<<j<<" j"<<endl;
            return 0;
            }
        j++;
    }
    return 1;
}
int main()
{
    ll cases;
    cin>>cases;
    sfor(0,cases,t){
       // string s;
        cin>>s;
        //string h;
        cin>>h;
        sort(s.bg,s.ed);
         n=s.sz,m=h.sz;
         int a=0;
        // cout<<s<<endl<<h<<endl;
        sfor(0,m-n+1,i){
             temp=h;
            sort(temp.bg+i,temp.bg+i+n);
            //cout<<"i "<<i<<" temp "<<temp<<" "<<endl;
            if(func(i))
            {
                cout<<"YES"<<endl;
                a=1;
                break;
            }
        }
        if(!a)
        cout<<"NO"<<endl;
    }
    return 0;
}

