#include<bits/stdc++.h>
using namespace std;

typedef long double ld;
typedef long long int ll;
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
#define iset set<int>
#define bit(x,i) (x&(1<<i))
int main()
{

    ll a1,a2;
    ll k1,k2,n;
    cin>>a1>>a2>>k1>>k2>>n;
    ll mi=1,ma=0;
    if(n-a1*(k1-1)-a2*(k2-1)<=0)
        mi=0;
    else
    {
        mi=min(n-a1*(k1-1)-a2*(k2-1),a1+a2);
    }
    if(k1>k2){
        ma=min(n/k2,a2);
        if(n-ma*k2){
            ma+=min((n-ma*k2)/k1,a1);
        }
    }
    else
    {
        ma=min(n/k1,a1);
        if(n-ma*k1){
            ma+=min((n-ma*k1)/k2,a2);
        }

    }
cout<<mi<<" "<<ma;
    return 0;
}
