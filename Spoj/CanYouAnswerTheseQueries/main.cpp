#include<bits/stdc++.h>
using namespace std;

typedef long double ld;
typedef long long int ll;
vector<vector<ll> > adjlist;
ll max(ll x,ll y) {return (x>y)?x:y;}
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
#define sz size()
#define vi vector<ll>
#define imap map<ll,ll>
#define cmap map<char,ll>
#define smap map<string,ll>
#define iset set<ll>
#define bit(x,i) (x&(1<<i))
struct node
{
    /* data */
    ll sum;
    ll pSum;
    ll sSum;
    ll mSum;
};

ll n;
ll q;
ll inputArray[50009];
node segTree[110000];
void mergeNodes(ll l,ll r){
    segTree[l/2].sum=segTree[l].sum+segTree[r].sum;
    segTree[l/2].mSum=max(max(segTree[l].mSum,segTree[r].mSum),segTree[l].sSum+segTree[r].pSum);
    segTree[l/2].pSum=max(max(segTree[l/2].sum,segTree[l].pSum),segTree[l].sum+segTree[r].pSum);
    segTree[l/2].sSum=max(max(segTree[l/2].sum,segTree[r].sSum),segTree[l].sSum+segTree[r].sum);
    return;
}
void buildSeg(ll l,ll r,ll pos){
    if(l=r){
        segTree[pos].pSum=segTree[pos].sSum=segTree[pos].sum=segTree[pos].mSum=inputArray[l];
        return;
    }
    ll m=(l+r)/2;
    buildSeg(l,m,2*pos);
    buildSeg(m+1,r,2*pos+1);
    mergeNodes(2*pos,2*pos+1);
    return;
}
ll query(ll x,ll y){
    
}
int main()
{
    cin>>n;
    sfor(0,n,i)
    cin>>inputArray[i];
    cin>>q;
    buildSeg(1,n,1);
    return 0;
}
