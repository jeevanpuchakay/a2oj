#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    string lan1,lan2;
    map<string,string> link;
    for (int i = 0; i <m ; ++i) {
        cin>>lan1>>lan2;
        link[lan1]=lan2;
    }
    for (int j = 0; j <n ; ++j) {
        cin>>lan1;
        if(lan1.size()<=link[lan1].size())
            cout<<lan1<<" ";
        else
            cout<<link[lan1]<<" ";
    }
    return 0;
}