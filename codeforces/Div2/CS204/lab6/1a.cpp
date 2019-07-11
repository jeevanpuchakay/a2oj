#include <bits/stdc++.h>
using namespace std;

int max(int x, int y) { return (x > y) ? x : y; }
int min(int x, int y) { return (x > y) ? y : x; }

int main()
{
    int n;cin>>n;
    pair<int,int> lis[n];
    //first finish time, second is start time
    for(int i=0;i<n;i++){
        cin>>lis[i].second>>lis[i].first;
    }
    sort(lis,lis+n);
    int lastFinishTime=-1,count=0;
    for(int i=0;i<n;i++){
        if(lis[i].second>=lastFinishTime){
            count++;
            lastFinishTime=lis[i].first;
        }
    }
    cout<<"count is :"<<count<<endl;
    return 0;
}
