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
        ll n,a=0;
        cin>>n;
        ll pos[n],foul[n];
        sfor(n)
        {
            cin>>pos[i];
            pos[i]*=20;
        }
        sfor(n)
        {
            cin>>foul[i];
            foul[i]*=(-10);
            foul[i]+=pos[i];
            a=max(a,foul[i]);
        }
        if(a>0)cout<<a;
        else
            cout<<0;
        cout<<endl;
    }
    return 0;
}