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
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,a;
        cin>>n;
        ll array[n],count=0;
        sfor(n)
        {
            cin>>array[i];
            for (ll j = 0; j <i; ++j) {
                    array[j]^=array[i];
                if(!array[j]&&(i-j+1>=3))
                {
                    count+=i-j;
                }
            }
        }
        cout<<count<<endl;

    }
    return 0;
}