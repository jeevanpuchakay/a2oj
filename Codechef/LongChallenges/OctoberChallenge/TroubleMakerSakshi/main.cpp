#include<bits/stdc++.h>
using namespace std;

typedef long double ld;
typedef long long int ll;
vector<vector<int> > adjlist;
#define max(x,y) (x>y)?x:y
#define min(x,y) (x>y)?y:x
#define sfor(a,n,i) for(ll i=a;i<n;i++)
#define mod 1000000007
#define pb push_back
#define in insert
#define mp make_pair
#define inf mod
#define bg begin()
#define ed end()
#define vi vector<int>
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
        ll n,m,q,count1=0,count2=0;
        cin>>n>>m>>q;
        ll x,y;
        ll  ar=0,bc=0;
        vi c(m+1),r(n+1);
        sfor(0,q,i){
            cin>>x>>y;
            c[y]++;
            r[x]++;
        }
        sfor(1,n+1,i)
        if(r[i]%2)
            count1++;
        sfor(1,m+1,i)
        if(c[i]%2)
            count2++;

        ll count=count1*(m-count2)+count2*(n-count1);
        cout<<count<<endl;
    }
    return 0;
}
//1
//2 2 3
//1 1
//1 2
//2 1