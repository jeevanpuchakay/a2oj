#include<bits/stdc++.h>
using namespace std;
typedef long double ld;
typedef long long int ll;
vector<vector<int> > adjlist;
#define max(x,y) (x>y)?x:y
#define min(x,y) (x>y)?y:x
#define sfor(n) for(ll i=0;i<n;i++)
#define mod 1000000007
#define pb push_back
#define in insert
#define mp make_pair
#define inf mod
#define bg begin()
#define ed end()
#define vi vector<int>
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        ll a[n],b[n],in=0,num=1;
        b[0]=0;
        cin>>a[0];
        ll i;
        for (i = 01; i <n; ++i) {
            cin>>a[i];
            b[i]=0;
            if(a[i-1]*a[i]<0)
                num++;
            else {
                    b[i-num]+=num;
                    //b[b[in]]-=num-1;
                num = 1;
                }
            }
        b[i-num]+=num;
        cout<<b[0]<<" ";
        for (ll j = 01; j <n ; ++j) {
            b[j]+=b[j-1]-1;
            cout<<b[j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
//3
//4
//1 2 3 4
//4
//1 -5 1 -5
//6
//-5 -1 -1 2 -2 -3