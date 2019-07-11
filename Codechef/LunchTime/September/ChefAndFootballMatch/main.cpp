#include<bits/stdc++.h>
using namespace std;

typedef long double ld;
typedef long long int ll;
vector<vector<int> > adjlist;
#define max(x,y) (x>y)?x:y
#define min(x,y) (x>y)?y:x
#define sfor(i,n) for(ll i=0;i<n;i++)
#define mod 1000000007
#define pb push_back
#define in insert
#define mp make_pair
#define inf mod
#define bg begin()
#define ed end()
#define vi vector<int>
#define imap map<ll,ll>
#define smap map<string,ll>
#define iset set<int>
#define bit(x,i) (x&(1<<i))
int main()
{
    ll t;
    cin>>t;
    while(t--){
        ll a[2],b=0,c=0,n;
        a[0]=0,a[1]=0;
        ll z,d=0;
        cin>>n;
        ll i=0;
        while (i++<n){
            cin>>z;
            if(z==1){
                cin>>a[0]>>a[1];
                cout<<"YES"<<endl;
                d=01;
            } else{
                cin>>b>>c;
                if(b>c)
                    swap(b,c);
                if(a[0]>a[1])
                    swap(a[0],a[1]);
                if(b==c)
                {
                    cout<<"YES"<<endl;
                    a[0]=a[1]=b,d=1;
                } else if(!d){
                    cout<<"NO"<<endl;
                } else if(b<a[1])
                {
                    cout<<"YES"<<endl;
                    d=1;
                } else{
                    cout<<"NO"<<endl;
                    d=0;
                }
            }
        }
    }
    return 0;
}
//1
//6
//2 0 1
//1 3 1
//2 2 4
//2 5 6
//2 8 8
//2 9 10
