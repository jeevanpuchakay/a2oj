#include<bits/stdc++.h>
using namespace std;

typedef long double ld;
typedef long long int ll;
vector<vector<int> > adjlist;
#define max(x,y) (x>y)?x:y
#define min(x,y) (x>y)?y:x
#define sfor(n) for(int i=0;i<n;i++)
//const ll mod=pow(10,18);
#define pb push_back
#define in insert
#define mp make_pair
#define inf mod
#define bg begin()
#define ed end()
#define vi vector<int>
#define map map<int,int>
#define smap map<string,int>
#define iset set<int>
#define bit(x,i) (x&(1<<i))
ll fibv[65]={0};
ll fib(ll n){
    if(n==1)
        return 1;
    else if(n==0)
        return 0;
    else{
        if(fibv[n-2]==0)
            fibv[n-2]=fib(n-2);
        if(fibv[n-1]==0)
            fibv[n-1]=fib(n-1);
        return fibv[n-2]+fibv[n-1];
    }
}
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        ll a;
        a=(log2(n-1));
        a=pow(2,a);
        a=a%60;
        cout<<fib(a-1)%10<<endl;
    }
    return 0;
}
