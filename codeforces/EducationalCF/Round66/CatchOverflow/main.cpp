#include<bits/stdc++.h>
#include <algorithm>
using namespace std;
typedef long long int ll;
const long long m=1ll<<32;
long long min(int x)
{
    if(x>m)
        return m;
    else
        return x;
}
int main()
{
    int p,stop,a;
    cin>>a;
    ll n=0;
    string s;
    stack <int> timeline;
    timeline.push(1);
    for (int i = 0; i < a; ++i) {
        cin>>s;
        stop=timeline.top();
        if(s=="add")
        {
            n+=stop;
        }
        else if(s=="for")
        {
            cin>>p;
            timeline.push(min(stop*p));
        }
        else if(s=="end")
        {
            timeline.pop();
        }
    }
    if(n>=m)
        cout<<"OVERFLOW!!!";
    else
        cout<<n;
    return 0;
}
