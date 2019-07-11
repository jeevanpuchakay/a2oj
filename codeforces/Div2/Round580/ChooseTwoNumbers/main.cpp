#include<bits/stdc++.h>
using namespace std;

typedef long double ld;
typedef long long int ll;
vector<vector<int> > adjlist;
#define max(x,y) (x>y)?x:y
#define min(x,y) (x>y)?y:x
#define sfor(i,n) for(ll i=0;i<n;i++)
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
#define iset set<int>
#define bit(x,i) (x&(1<<i))
int main()
{
    ll n,m;
    cin>>n;
    ll a[n];
    ll feq[600]={0};
   sfor(i,n){
        cin>>a[i];
        feq[a[i]]++;
    }
    cin>>m;
    ll b[m];
    sfor(i,m){
        cin>>b[i];
        feq[b[i]]++;
    }
    sfor(i,n){
        sfor(j,m){
            if(!feq[a[i]+b[j]]){
                cout<<a[i]<<" "<<b[j];
                return 0;
            }
        }
    }

    return 0;
}
