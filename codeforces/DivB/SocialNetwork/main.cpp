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
int main()
{
    ll n,k,a;
    cin>>n>>k;
    vi id;
    vi::iterator z=id.bg;
    iset feq;
    sfor(0,n,i)
    {
        cin>>a;
        auto t=feq
        if((id.size()>=k)&&(feq[a]==0))
        {
            feq[*(id.ed-1)]=0;
            id.pop_back();
            id.insert(id.bg,a);
        }
        else if(feq[a]==0){
            id.insert(id.bg,a);
        }
        feq[a]++;

    }
    cout<<id.size()<<endl;
    for(z=id.bg;z!=id.ed;z++)
        cout<<*z<<" ";
    return 0;
}
