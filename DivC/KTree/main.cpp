#include<bits/stdc++.h>
using namespace std;
vector<vector<int> > adjlist;
#define max(x,y) (x>y)?x:y
#define min(x,y) (x>y)?y:x
#define mod 1000000007
#define pb push_back
#define in insert
#define mp make_pair
#define inf mod
#define bg begin()
#define ed end()
#define vi vector<int>
#define map map<int,int>
#define smap map<string,int>
#define set set<int>
typedef long double ld;
typedef long long int ll;
ll k,d;
ll func(ll n,ll a){
    if(!n){
        if(a)
        return 1;
        else
            return 0;
    }
    else if(n<=k){
        ll sum=0;
        for (ll i = 0; i <n ; ++i) {
            if(i>=d-1)
            sum+=func(n-i-1,1);
            else
                sum+=func(n-i-1,a);
            sum%=mod;
        }
        return sum;
    }
    else if(n>k){
        ll sum=0;
        for (ll i = 0; i <k ; ++i) {
            if(i>=d-1)
                sum+=func(n-i-1,1);
            else
            sum+=func(n-i-1,a);
            sum%=mod;
        }
        return sum;
    }
}
int main()
{
    ll n;
    cin>>n>>k>>d;
    cout<<func(n,0);
    return 0;
}