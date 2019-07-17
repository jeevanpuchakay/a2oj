#include<bits/stdc++.h>
using namespace std;
vector<vector<int> > adjlist;
#define max(x,y) (x>y)?x:y
#define min(x,y) (x>y)?y:x
#define sfor(n) for(int i=0;i<n;i++)
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
int main()
{
    ll d,n,ans=0;
    cin>>d>>n;
    ll months[n];
    sfor(n)
    cin>>months[i];
    for(ll i=1;i<n;i++)
    {
        ans+=d-months[i-1];
    }
    cout<<ans;
    return 0;
}