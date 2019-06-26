#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
    ll n,h=0,time=0;
    cin>>n;
    ll heits[n];
    for (ll i = 0; i <n ; ++i) {
        cin>>heits[i];
        if(heits[i]>=h)
        {
            time+=2+heits[i]-h;
        }
        else
        {
            time+=2+h-heits[i];
        }
        h=heits[i];
    }
    cout<<time-1;
    return 0;
}