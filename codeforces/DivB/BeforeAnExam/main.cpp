#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
    int d,sumtime,summax=0,summin=0;
    cin>>d>>sumtime;
    int pat[d][2];
    for (int i = 0; i <d ; ++i) {
        cin>>pat[i][0]>>pat[i][1];
        summax+=pat[i][1];
        summin+=pat[i][0];
    }
    if(sumtime>summax||sumtime<summin)
    {
        cout<<"NO";
        return 0;
    }
    cout<<"YES"<<endl;
    sumtime-=summin;
    for (int j = 0; j <d ; ++j) {
        int diff=pat[j][1]-pat[j][0];
        if(sumtime>=diff)
        {
            cout<<pat[j][0]+diff<<" ";
            sumtime-=diff;
        }
        else
        {
            cout<<sumtime+pat[j][0]<<" ";
            sumtime=0;
        }
    }
    return 0;
}