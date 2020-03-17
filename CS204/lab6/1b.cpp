#include <bits/stdc++.h>
using namespace std;

int max(int x, int y) { return (x > y) ? x : y; }
int min(int x, int y) { return (x > y) ? y : x; }
    pair<int,int> lis[1009];

int go(vector<pair<int,int>> qu,int j,int n){
    for(int i=0;i<qu.size();i++){
        pair<int,int> l=qu[i],tr=lis[j];
        if(l.first>tr.second)continue;
        else if(l.second<tr.first)continue;
        else
        {
            return 0;
        }
    }
    return 1;
}
int main()
{
    int n;cin>>n;
    //first finish time, second is start time
    for(int i=0;i<n;i++){
        cin>>lis[i].first>>lis[i].second;
    }int ans=0; vector<pair<int,int>> lol;
    for(int i=0;i<n;i++){
        vector<pair<int,int>> qu;
        qu.push_back(lis[i]);
        for (int j = i+1; j<n; j++)
        {
            /* code */
            if(go(qu,j,n)){
                qu.push_back(lis[j]);
            }
        }
        //ans=max(ans,qu.size());
        if(ans<qu.size())
        lol=qu,ans=qu.size();
    }

    cout<<ans;
    for(int i=0;i<ans;i++){
        cout<<lol[i].first<<" "<<lol[i].second<<endl;
    }
    return 0;
}
