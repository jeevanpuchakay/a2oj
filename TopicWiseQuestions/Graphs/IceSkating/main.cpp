//incomplete
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
    int n;
    cin>>n;
    vector<pair<int,int> > cods;
    int a,b;
    sfor(n)
    {
        cin>>a>>b;
        cods.pb(mp(a,b));
    }
    sort(cods.bg,cods.ed);

    return 0;
}