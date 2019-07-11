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
    int sum,limit;
    cin>>sum>>limit;
    set ans;
    for (int i = limit; i >0&&sum; i--) {
        int j=0;
        while(!(i&(1<<j))&&j<15)
            j++;
        int b=pow(2,j);
        if(j<15&&b<=sum)
        {
            sum-=b;
            ans.insert(i);
        }
    }
    if(!sum)
    {
        cout<<ans.size()<<endl;
        for (auto i = ans.bg; i !=ans.ed; ++i) {
            cout<<*i<<" ";
        }
    }
    else
        cout<<-1;
    return 0;
}