#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
    int n,i=0,count=0,s=0;
    cin>>n;
    int inp[n];
    for (i = 0; i < n; ++i) {
        cin>>inp[i];
        if(inp[i]<inp[i-1]&&i)
        {
            count++;
            s=i;
        }
    }
    if(!s)
        cout<<0;
    else if(count==1&&inp[0]>=inp[n-1])
        cout<<n-s;
    else
        cout<<-1;
    return 0;
}