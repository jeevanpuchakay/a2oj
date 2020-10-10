#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
    ll n,s,t,turns=0;
    cin>>n>>s>>t;
    ll inp[n+1];
    for (ll i = 1; i < n+1; ++i) {
        cin>>inp[i];
    }
    int feq[n+1]={0};
    while(1)
    {
        if(s!=t&&feq[s]==0)
        {
            feq[s]++;
            turns+=1;
            s=inp[s];
        }
        else if(s==t)
        {
            cout<<turns;
            return 0;
        }
        else
        {
            cout<<-1;
            return 0;
        }
    }
}