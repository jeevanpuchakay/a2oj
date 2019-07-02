#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
func(int i,int j,int n,int sum,int input[])
{
    int dum=0;
    for (int j = 0; j <n ; ++j) {
        dum+=input[j];
        if(dum==(sum/3))
        {
            lit.insert(j);
            break;
        }
    }
}
int main()
{
    ll n,sum=0,dum=0;
    cin>>n;
    ll input[n];
    for (int i = 0; i <n ; ++i) {
        cin>>input[i];
        sum+=input[i];
    }
    if(sum%3)
    {
        cout<<0;
        return 0;
    }
    set<int> lit;

    dum=0;
    for (int j = i1; j <n ; ++j) {
        dum+=input[j];
        if(dum==(sum/3))
        {
            i2=j;
            break;
        }
    }
    return 0;
}

