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
const ll m=100000000;
ll fib[m]={0};
const int c=4000000;
 ll ans=0;
int main()
{
    fib[1]=1;
    fib[2]=2;
    for (ll i = 3;fib[i-1]<c ; ++i) {
        fib[i]=fib[i-1]+fib[i-2];
         if(fib[i]%2==0)
         {
             ans+=fib[i];
         }
    }
    cout<<ans+2;
    return 0;
}