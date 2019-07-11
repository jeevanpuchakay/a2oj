#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
ll m,n;
int main()
{
    cin>>m>>n;
    int b[m][n],a[m][n]={1},c[m][n];
    for (ll i = 0; i <m ; ++i) {
        for (ll j = 0; j <n ; ++j) {
            cin>>b[i][j];
            if(!b[i][j])
            {
                for (int k = 0; k <n ; ++k) {
                    a[i][k]=0;
                }
                for (int k = 0; k <m ; ++k) {
                    a[k][j]=0;
                }
            }
        }
    }

}