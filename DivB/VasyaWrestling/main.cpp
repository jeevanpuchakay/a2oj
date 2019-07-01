#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
ll till(vector<ll> player1,vector<ll> player2)
{
    ll tot=0;
    ll n= player1.size()>player2.size()?player2.size():player1.size();
    for (ll i = 0; i < n; ++i) {
        if(player1[i]==player2[i])
            tot++;
        else
            return tot;
    }
    return tot;
}
int main()
{
    ll n,x,sum1=0,sum2=0;
    cin>>n;
    vector<ll> player1,player2;
    for (ll i = 0; i <n ; ++i) {
        cin>>x;
        if(x>0)
        {
            sum1+=x;
            player1.push_back(x);
        }
        else
        {
            sum2-=x;
            player2.push_back(-x);
        }
    }
    if(sum1>sum2)
    {
        cout<<"first";
        return 0;
    }
    else if(sum1<sum2)
    {
        cout<<"second";
        return 0;
    }
    ll p=till(player1,player2);
    if(p<player1.size()&&p<player2.size())
    {
        if(player1[p]>player2[p])
        {
            cout<<"first";
            return 0;
        }
        else
        {
            cout<<"second";
            return 0;
        }
    } else if((p==player1.size()||p==player2.size())&&(player1.size()!=player2.size()))
    {
        player1.size()>player2.size()?cout<<"first":cout<<"second";

    }
    if(player1.size()==player2.size())
    {
        if(x>0)
            cout<<"first";
        else
            cout<<"second";
    }

    return 0;
}

