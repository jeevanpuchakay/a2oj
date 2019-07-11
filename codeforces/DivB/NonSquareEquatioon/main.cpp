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
ll sum(ll n)
{
    ll c=0;
    while(n)
    {
        c+=n%10;
        n/=10;
    }
    return c;
}
int main()
{
    ll n;
    cin>>n;
    for(lli=0;i<sqrt(n)+1;i++)
    {
        if(i*i+i*sum(i)-n==0)
        {
            cout<<i;
            return 0;
        }
    }
    cout<<-1;
    return 0;
}