#include<bits/stdc++.h>
using namespace std;

typedef long double ld;
typedef long long int ll;
vector<vector<int> > adjlist;
#define max(x,y) (x>y)?x:y
#define min(x,y) (x>y)?y:x
#define sfor(a,n,i) for(ll i=a;i<n;i++)
#define mod 1000000007
#define pb push_back
#define in insert
#define mp make_pair
#define inf mod
#define bg begin()
#define ed end()
#define vi vector<ll>
#define imap map<ll,ll>
#define cmap map<char,ll>
#define smap map<string,ll>
#define iset set<ll>
#define bit(x,i) (x&(1<<i))
int main()
{
    ll t;
    cin>>t;
    while (t--){
        ll a,b;
        cin>>a>>b;
        a=a%10;
        if(a==2||a==3||a==7||a==8)
        {
                a=pow(a,(b-1)%4+1);

        }
        else if(a==4||a==9){
            if(b%2)
                a=pow(a,1);
            else
                a=pow(a,2);
        }
        cout<<(a%10)<<endl;
    }

    return 0;
}

