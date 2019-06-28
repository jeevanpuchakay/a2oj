#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
map<char,int> feq;
int main()
{
    string s;
    int count=0;
    cin>>s;
    for (int i = 0; i < s.size(); ++i) {
       feq[s[i]]++;
    }
    for (auto j = feq.begin(); j!=feq.end() ; ++j) {
        if(j->second%2==0)
        {
            feq.erase(j);
        }
        else if(j->second==1)
        {
            count++;
            feq.erase(j);
        }
    }
    if(feq.empty())
    {
        if(count%2==0||count==1)
        {
            cout<<"First";
        }
        else
        {
            cout<<"Second";
        }
        return 0;
    }
    count+=feq.size()-1;
    if(count%2)
    {
        cout<<"First";
    }
    else
    {
        cout<<"Second";
    }
    return 0;

    
}

