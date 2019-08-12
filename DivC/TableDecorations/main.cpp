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
#define imap map<int,int>
#define smap map<string,int>
#define set set<int>
typedef long double ld;
typedef long long int ll;
ll min(ll x,ll y)
{
    return (x>y?y:x);
}
int main()
{
   ll a[3];
    cin>>a[0]>>a[1]>>a[2];
    sort(a,a+3);
   ll count=min(a[0]+a[1],(a[0]+a[1]+a[2])/3);
   cout<<count;


    return 0;
}