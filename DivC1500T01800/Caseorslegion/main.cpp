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
ll dp[110][110][110][110];
ll n1,n2,k1,k2;
ll go(ll n,ll m,ll k11,ll k22){

}
int main()
{

    cin>>n1>>n2>>k1>>k2;
    ll hdp[n1+n2][k1+1][k1+1],fdp[n1+n2+1][k2+1][k2+1];
    hdp[1][1][1]=1,fdp[1][1][1]=1;

    return 0;
}