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
    ll n,sum=0,zer=0,neg=0;
    cin>>n;
    ll a[n];
    sfor(i,n){
        cin>>a[i];
    }
    sfor(i,n){
        if(a[i]<0){
            sum+=-1-a[i];
            neg++;
        }
        else if(a[i]>0)
        {
            sum+=a[i]-1;
        }
        else
        {
            zer++;
        }
    }
    if(zer)
    sum+=zer;
    else{
        if(neg%2)
            sum+=2;
    }
    cout<<sum;
    return 0;
}
