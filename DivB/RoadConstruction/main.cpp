#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
    int n,m,i,j,x,y;
    cin>>n>>m;
    int roads[n+1][n+1];
    for (int i1 = 0; i1 <n+1 ; ++i1) {
        for (int k = 0; k <n+1 ; ++k) {
            roads[i1][k]=1;
        }
    }
    for (int k = 1; k < m+1; ++k) {
        cin>>x>>y;
        roads[x][y]=0;
        roads[y][x]=0;
    }
    for (i = 1; i <n+1 ; ++i) {
        for (j = 1; j <n+1 ; ++j) {
            if(roads[i][j]==0)
            {
                break;
            }
        }
        if(j==n+1)
        {
            break;
        }
    }
    cout<<n-1<<endl;
    for (int l = 1; l <n+1 ; ++l) {
        if(l==i)
            continue;
        cout<<i<<" "<<l<<endl;
    }
    return 0;
}