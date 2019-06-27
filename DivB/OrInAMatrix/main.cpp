#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
ll m,n;
int checkrow(ll i,int *inp)
{
    for (ll j = 0; j <n ; ++j) {
        if(*(inp+(i)*n+j)==1)
            return 1;
    }
    return 0;
}
int checkcol(ll i,int *inp)
{
    for (ll j = 0; j <m; ++j) {
        if(*(inp+i+j*m)==1)
            return 1;
    }
    return 0;
}
int main()
{
    cin>>m>>n;
    ll a;
    int inp[m][n]={0},b[m][n]={1};
    for (ll i = 0; i <m ; ++i) {
        for (ll j = 0; j <n ; ++j) {
            cin>>inp[i][j];
        }
    }
    for (ll i = 0; i <m ; ++i) {
        a=checkrow(i,(int *)inp);
        for (ll j = 0; j <n ; ++j) {
            if(a||checkcol(j,(int *)inp))
                b[i][j]=1;
        }
    }
    if(b==inp)
    return 0;
}