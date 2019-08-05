#include<bits/stdc++.h>

using namespace std;
vector <vector<int>> adjlist;
#define sfor(n) for(int i=0;i<n;i++)
#define mod 1000000007
#define pb push_back
#define in insert
#define mp make_pair
#define inf mod
#define bg begin()
#define ed end()
#define vi vector<int>
#define imap map<int,int>
#define smap map<string,int>
#define set set<int>
typedef long double ld;
typedef long long int ll;

ll max(ll x, ll y) {
    return x > y ? x : y;

}

ll min(ll x, ll y) {
    return x > y ? y : x;
}
int zeros(string s1)
{
    int i,count=0;
    for (i = 0; i <s1.size(); ++i) {
        if(s1[i]=='0')
            count++;
        else
            count=0;
    }
    return count;
}
string subtract(string s1,tring s2)
{
    reverse(s1.bg,s1.ed);
    reverse(s2.bg,s2.ed);int b=0;
    for (int i = 0; i <s2.size() ; ++i) {
        if(s1[i]-b>=s2[i])
        {
            if(b)
            {
                s1[i]=s1[i]-s2[i]+'0'-1;
                b--;
            }
            else
                s1[i]=s1[i]-s2[i]+'0';
        }
        else{
            if(b)
            {
                s1[i]=s1[i]-s2[i]+'9';
            }
            else
            {s1[i]=s1[i]-s2[i]+'9'+1;
                b++;
            }
        }
    }
    for (int j = s2.size(); b ; ++j) {
        if(s1[j]>=b)
        {
            s1[j]-=b;
            break;
        }
        else
        {
            s1[j]='9';
        }
    }
    s1.erase(s1.size()-zeros(s1));
    reverse(s1.bg,s1.ed);
    return s1;
}
string gcd2(string s1,string s2)
{
    string s;
    if(s1.size()==1&&s1=='0')
        s=s2;
    else if(s2.size()==1&&s2=='0')
        s=s1;
    else if(s1.size()>s2.size())
        s=gcd2(subtract(s1,s2),s2);
    else if(s2.size()>s1.size())
        s=gcd2(s1,subtract(s2-s1));
    else if(s1.size()==s2.size())
    {
        for (int i = 0; i <s1.size() ; ++i) {
            if(s1[i]>s2[i])
            {
                s=gcd2(s2,subtract(s1,s2));
                break;
            }
            }
    }
        return s;
}
int main() {
    string s1,s2;
    cin>>s2>>s1;
    string ans=gcd2(s1,s2);

    cout<<ans;
    return 0;
}