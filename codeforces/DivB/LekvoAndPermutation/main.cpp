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
    int n,k;
    cin>>n>>k;
    if(n==k)
    {
        cout<<-1;
        return 0;
    }
    int a[n+1];
    a[1]=n-k;
    for (int j = 2; j <n-k+1; ++j) {
        a[j]=j-1;
    }
    for (int l = n-k+1; l <n +1; ++l) {
        a[l]=l;
    }
    sfor(n)
    cout<<a[i+1]<<" ";
    return 0;
}