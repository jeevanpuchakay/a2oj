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
int main()
{
    ll cases;
    cin>>cases;
    sfor(0,cases,t){
        ll n;
        cin>>n;
       vi track(2*n+1);
       sfor(1,2*n+1,i)
       cin>>track[i];
       unordered_map<ll,ll> ldiff;
       ll rn=0;
       rfor(n,0,i){
           if(track[i]==2)
           rn++;
           else
           {
               rn--;

           }
           if(!ldiff[rn])
           ldiff[rn]=i;
       } 

       rn=0;
       sfor(n+1,2*n+1,i){
           if(track[i]==2)
           rn++;
           else
           {
               rn--;
           }
           if(ldiff.find(rn)!=ldiff.ed){
               
           }
           
       }
    }
    return 0;
}

