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
#define imap map<int,int>
#define smap map<string,int>
typedef long double ld;
typedef long long int ll;
int main()
{
    ll n,m;
    cin>>n>>m;
    ll a=min(m,n);
    cout<<a+1<<endl;
    for(ll i=0;i<=a;i++)
    {
        cout<<i<<" "<<a-i<<endl;
    }
    return 0;
}
