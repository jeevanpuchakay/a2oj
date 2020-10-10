#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
    ll n;
    ll sum1=0,sum2=0;
    cin>>n;
    ll fare[n][2];
    vector<char> pat;
    for (int i = 0; i < n; ++i) {
        cin>>fare[i][0]>>fare[i][1];
    }
    for (ll j = 0; j < n; ++j)
    {
        sum1+=fare[j][0];
        pat.push_back('A');
        if(sum1-sum2>500)
        {
            sum1-=fare[j][0];
            sum2+=fare[j][1];
            pat.pop_back();
            pat.push_back('G');
        }
    }
    /*if(fare[0][0]>fare[0][1])
    {
        sum2+=fare[0][1];
        pat.push_back('G');
    }
    else {
        sum1+=fare[0][0];
        pat.push_back('A');
    }
    for (ll j = 1; j < n; ++j) {
        if(sum1>sum2)
        {
            sum2+=fare[j][1];
            pat.push_back('G');
        }
        else if(sum1<sum2)
        {
            sum1+=fare[j][0];
            pat.push_back('A');
        }
        else
        {
            if(fare[j][0]>fare[j][1])
            {
                sum2+=fare[j][1];
                pat.push_back('G');
            }
            else
            {
                sum1+=fare[j][0];
                pat.push_back('A');
            }
        }
    }*/
    ll a=sum1-sum2;
    if((a>=0)&&a<=500)
    {
        for (int i = 0; i < pat.size(); ++i) {
            cout<<pat[i];
        }
    }
    else if((a<0)&&(a>=-500))
    {
        for (int i = 0; i < pat.size(); ++i) {
            cout<<pat[i];
        }
    }
    else {
        cout<<-1;
    }
    return 0;
}