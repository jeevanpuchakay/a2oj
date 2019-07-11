#include<bits/stdc++.h>
using namespace std;
vector<vector<int> > adjlist;
#define max(x,y) (x>y)?x:y
#define min(x,y) (x>y)?y:x
#define mod 1000000007
#define pb push_back
#define in insert
#define mp make_pair
#define inf mod
#define bg begin()
#define ed end()
#define vi vector<int>
#define map map<double,int>
#define smap map<string,int>
#define set set<int>
typedef long double ld;
typedef long long int ll;
int main()
{
    int n,x,y;
    cin>>n>>x>>y;
    map ans;
    double a,b;
    int c=0,d=0;
    for (int i = 0; i <n ; ++i) {
        cin>>a>>b;
        b-=y;
        a-=x;
        if(a==0)
        {
            c++;
        }
        else
        ans[b/a]++;
    }
  if(c)
    {
        cout<<ans.size()+1;
    }
    else
    cout<<ans.size();
    return 0;
}