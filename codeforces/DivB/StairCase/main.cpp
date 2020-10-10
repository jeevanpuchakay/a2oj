#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
    ll n,m;
    cin>>n>>m;
    ll dirt[m];
    for (ll i = 0; i < m; ++i) {
        cin>>dirt[i];
    }
    sort(dirt,dirt+m);
    if(dirt[0]==1||dirt[m-1]==n)
    {
        cout<<"NO";
        return 0;
    }
    for (ll i = 0; i < m-1; ++i) {
        if(dirt[i+1]-dirt[i]==1&&dirt[i+2]-dirt[i+1]==1)
        {
            cout<<"NO";
            return 0;
        }
    }
    cout<<"YES";
    return 0;
}

