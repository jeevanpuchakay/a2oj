#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,m,k,r,c,fen=0;
        cin>>n>>m>>k;
        ll park[n][m];
        memset(park,0, sizeof(park[0][0])*m*n);
        for (ll i = 0; i < k; ++i) {
                cin>>r>>c;
                park[r-1][c-1]=1;
        }
        fen=m+n+2*m*n;
        for (ll i = 0; i < n; ++i) {
            for (ll j = 0; j < m; ++j) {
                if(park[i][j])
                {

                    if((i!=n-1)&&park[i+1][j])//below and non bottom
                    {
                            fen--;
                    }
                    if((j!=m-1)&&park[i][j+1])//next one and non last column
                    {
                            fen--;
                    }
                }
                else
                {
                    if(!i)
                        fen--;
                    else if(i==n-1)
                        fen--;
                    if((i!=n-1)&&(!park[i+1][j]))
                        fen--;
                    if((j!=m-1)&&(!park[i][j+1]))
                        fen--;
                    if(!j)
                        fen--;
                    else if(j==m-1)
                        fen--;
                }
            }
        }
        cout<<fen<<endl;
    }
    return 0;
}
/*
 * if(i&&park[i-1][j])//up and non first row
                    {
                            fen--;
                    }
     if(j&&park[i][j-1])//previous and non first column
                    {
                            fen--;
                    }
 */
/*
 * if((i)&&(!park[i-1][j]))
                        fen--;


                    if((j)&&(!park[i][j-1]))
                        fen--;
 */