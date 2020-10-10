#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
    int n,k,count=0;
    cin>>n>>k;
    k=240-k;
    for (int i = 1; i <=n ; ++i) {
        if(k-5*i>=0)
        {
            count++;
            k-=5*i;
        }
        else
        {
            break;
        }
    }
    cout<<count;
    return 0;
}

