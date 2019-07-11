#include<bits/stdc++.h>
using namespace std;

typedef long double ld;
typedef long long int ll;
vector<vector<int> > adjlist;
#define max(x,y) (x>y)?x:y
#define min(x,y) (x>y)?y:x
#define sfor(a,n,i) for(ll i=a;i<n;i++)
#define rfor(n,a,i) for(ll i=n;i>=a;i--)
#define mod 1000000007
#define pb push_back
#define in insert
#define mp make_pair
#define inf mod
#define bg begin()
#define ed end()
#define vi vector<ll>
#define imap map<ll,ll>
#define cmap map<char,ll>
#define smap map<string,ll>
#define iset set<ll>
#define bit(x,i) (x&(1<<i))
int main()
{
   ll t;
   cin>>t;
   while(t--){
       ll n;
       cin>>n;
       int k=(int)(log2(n));
       int q=1;
       rfor(k-1,01,i){
          // cout<<"x "<<(n&(1<<i))<<endl;
           if((n&(1<<(i)))==0){
              // cout<<"i "<<i<<endl;
               rfor(i-1,0,j){
                   if(n&(1<<(j))){
                      /// cout<<"j "<<j<<endl;
                       n|=(1<<i);
                       n&=~(1<<j);
                       q=0;
                   }
                   if(!q)
                       break;
               }
           }
           if(!q)
               break;
       }
       cout<<n<<endl;
   }
    return 0;
}
