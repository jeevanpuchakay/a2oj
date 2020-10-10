#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
    int n,a,score=0;
    cin>>n;
    map<int,int> lis;
    for (int i = 0; i < n; ++i) {
        cin>>a;
        lis[a]++;
    }
    auto i=lis.end();
    i--;
    while(i!=lis.begin())
    {
        auto j=i;
        j++;
        auto k=i;
        k--;
        if((i->first==j->first-1)&&(k->first+1==i->first))
        {
            score+=i->second;
        }
        i--;
    }
    cout<<score;
}