//https://codeforces.com/problemset/problem/357/B?mobile=false


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
    int n,m,a,b,c;
    cin>>n>>m;
    int ans[n+1]={0};
    for (int i = 0; i < m; ++i) {
        cin>>a>>b>>c;
        int temp[4]={0};
        temp[ans[a]+ans[b]+ans[c]]=1;
        for (int j = 1; j <4 ; ++j) {
            if(!temp[j])
            {
                if(!ans[a])
                    ans[a]=j;
                else if(!ans[b])
                    ans[b]=j;
                else
                    ans[c]=j;
            }
        }
    }
    for (int j = 1; j <n+1 ; ++j) {
        cout<<ans[j]<<" ";
    }
    return 0;
}