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
    ll v,p,c;
    cin>>v;
    ll al[10],seq[10]={0};
    for (ll i = 0; i <9 ; ++i) {
        cin>>al[i+1];
        if(c>=al[i+1])
        {
            c=al[i+1];
            p=i+1;
        }
    }
    if(c>v)
    {
        cout<<-1;
        return 0;
    }
    seq[p]=v/c;
    int a=v-(v/c)*c;
        for (int i = 9; i >p ; --i) {
            while((a+c>=al[i]))
            {
                a=a-al[i]+c;
                seq[p]--;
                seq[i]++;
            }
        }
    for (int j = 9; j >=1 ; --j) {
        for (int i = 0; i <seq[j] ; ++i) {
            cout<<j;
        }
    }
    return 0;
}