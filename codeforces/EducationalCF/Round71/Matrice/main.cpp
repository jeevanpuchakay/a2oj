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
    ll n,m,c=0,d=0;
    cin>>n>>m;
    ll a[n+1][m+1],b[n+1][m+1];
    vector<pair<ll,ll>> ans;
    for (int i = 01; i <n+1 ; ++i) {
        for (int j = 01; j <m+1; ++j) {
            cin >> a[i][j];
            b[i][j] = 0;
            if(i>0&&j>0)
            {
                int sum=a[i-1][j]+a[i-1][j-1]+a[i][j]+a[i][j-1];
                if(sum==4)
                { ans.pb(mp(i-1,j-1));
                b[i][j]=b[i][j-1]=b[i-1][j]=b[i-1][j-1]=1;}
            }
        }
    }
    for (int k = 01; k < n+1; ++k) {
        for (int i = 01; i < m+1; ++i) {
            if(a[k][i]!=b[k][i])
            {
                cout<<-1;
                return 0;
            }
        }
    }

        cout<<ans.size()<<endl;
        for (int i = 0; i < ans.size(); ++i) {
            cout<<ans[i].first<<" "<<ans[i].second<<endl;
        }

    return 0;
}