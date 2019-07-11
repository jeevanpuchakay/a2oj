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
        ll b,p,f;
        cin>>b>>p>>f;
        ll h,c;
        cin>>h>>c;
        if(b%2)
            b-=1;
        b/=2;
        ll ham=0,chic=0;
        if(h>=c)
        {
            if(b>=p)
            {
                b-=p;
                ham=p;
                p=0;
                if(b>=f)
                {
                    chic=f;
                }
                else
                {
                    chic=b;
                }
            }
            else
            {
                ham=b;
                b=0;
            }
        }
        else
        {
            if(b>=f)
            {
                b-=f;
                chic=f;
                f=0;
                if(b>=p)
                {
                    ham=p;
                }
                else
                {
                    ham=b;
                }
            }
            else
            {
                chic=b;
                b=0;
            }
        }
        cout<<h*ham+c*chic<<endl;
    }
    return 0;
}