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
    int m,n;
    cin>>m>>n;
    int time[m][n];
    int ans[m]={0};
    for (int i = 0; i < m; ++i) {
        for (int j = 0; j <n; ++j) {
            cin>>time[i][j];
        }
    }
    for (int l = 0; l < n; ++l) {
        int freeat=0;
        for (int i = 0; i < m; ++i) {
            int start=max(freeat,ans[i]);
            ans[i]=start+time[i][l];
            freeat=ans[i];
        }
    }
    sfor(m)
    {
        cout<<ans[i]<<" ";
    }
    return 0;
}