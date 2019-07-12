#include<bits/stdc++.h>
using namespace std;
vector<vector<int> > adjlist;
#define max(x,y) (x>y)?x:y
#define min(x,y) (x>y)?y:x
#define sfor(n) for(int i=0;i<n;i++)
#define mod 1000000007
#define pb push_back
#define in insert
#define mp make_pair
#define inf mod
#define bg begin()
#define ed end()
#define vi vector<int>
#define map map<int,int>
#define smap map<string,int>
#define set set<int>
typedef long double ld;
typedef long long int ll;
int main()
{
    int n;
    cin>>n;
    int heights[n],flow=1,t=1,temp;
    sfor(n)
    {
        cin>>heights[i];
    }
    for(int i=1;i<n;i++)
    {
        temp=heights[i-1];
        if(temp>=heights[i])
            flow++;
        else
            break;
    }
    t=max(t,flow);
    flow=1;
    for (int j = 1; j <n ; ++j) {
        temp=heights[j];
        for (int i = j-1; i >=0 ; i--) {
            if(heights[i]<=temp)
                flow++;
            else
                break;
            temp=heights[i];
        }
        temp=heights[j];
        for (int k = j+1; k <n ; ++k) {
            if(heights[k]<=temp)
                flow++;
            else
                break;
            temp=heights[k];
        }
        t=max(t,flow);
        flow=1;
    }
    cout<<t;
    return 0;
}