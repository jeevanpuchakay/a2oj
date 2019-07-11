//incomplete

#include<bits/stdc++.h>
using namespace std;
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
        adjlist=vector<vi> (mod);
        ll n,a;
        cin>>n;
        ll array[n],xors[n]={0},count=0;
        cin>>array[0];
        xors[0]=array[0];
        adjlist[xors[0]].pb(1);
        for (int i = 1; i < n; ++i) {
            cin>>array[i];
            xors[i]=xors[i-1]^array[i];
            adjlist[xors[i]].pb(i+1);
        }
        for (int j = 0; j <n; ++j) {
            if(!xors[j])
            {
                count+=j;
            }
            for (auto i=adjlist[xors[j]].bg;i!=adjlist[xors[j]].ed;i++)
            {
                for (auto k=adjlist[xors[j]].bg+1; k!=adjlist[xors[j]].ed ; k++) {
                    if(*k-*i-1<0)
                        count+=(*i+1-*k);
                    else
                        count+=(*k-*i-1);
                }
            }
        }
        cout<<count<<endl;
    }
    return 0;
}