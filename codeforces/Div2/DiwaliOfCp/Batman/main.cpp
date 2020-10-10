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
#define vi vector<ll>
#define imap map<ll,ll>
#define cmap map<char,ll>
#define smap map<string,ll>
#define iset set<ll>
#define bit(x,i) (x&(1<<i))
int p[200]={0};

int go(ll n){
    if(!p[n-2])
        return 1;
    else if(!p[n-3])
        return 1;
    else if(!p[n-5])
        return 1;
    return 0;
}
int main()
{
    ll t,n;
    cin>>t;
    p[0]=0,p[1]=0,p[2]=1,p[3]=1,p[4]=1,p[5]=1,p[6]=1,p[7]=0,p[8]=0,p[9]=1;
    sfor(10,109,i)
    p[i]=go(i);
    while(t--){
        cin>>n;
        p[n]?cout<<"Batman":cout<<"Superman";
        cout<<endl;
    }
    return 0;
}
