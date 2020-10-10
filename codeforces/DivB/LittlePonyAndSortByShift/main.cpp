//time limit exceeded
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
    int n,x,ans=0,i;
    cin>>n;
    vector<int> inp,b;
    for(int i=0;i<n;i++)
    {
        cin>>x;
        inp.push_back(x);
    }
    b=inp;
    sort(b.begin(),b.end());
    for (int k = 0; k <=2*n-2 ; ++k) {
       if(b==inp)
       {
           cout<<ans;
           return 0;
       }
        inp.push_back(inp[0]);
        inp.erase(inp.begin());
        ans++;
}
    cout<<-1;
    return 0;
}