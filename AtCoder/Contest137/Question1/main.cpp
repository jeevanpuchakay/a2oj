#include<bits/stdc++.h>
using namespace std;
vector<vector<int> > adjlist;
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
ll max(ll x ,ll y)
{
    return x>y?x:y;
}
int main()
{
    ll a,b;
    cin>>a>>b;
    cout<<max(a+b,max(a-b,a*b))<<endl;
    return 0;
}