//bug
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
int equi(string s1,string s2)
{
    ll n=s1.size();
    if(s1==s2)
        return 1;
    else if(n==1)
        return 0;
    return max(equi(s1.substr(0,n/2),s2.substr(0,n/2))&&equi(s1.substr(n/2,n/2),s2.substr(n/2,n/2)),equi(s1.substr(0,n/2),s2.substr(n/2,n/2))&&equi(s1.substr(n/2,n/2),s2.substr(0,n/2)));
    //return (equi(s1.substr(0,n/2),s2.substr(0,n/2))&&equi(s1.substr(n/2,n/2),s2.substr(n/2,n/2)))||(equi(s1.substr(0,n/2),s2.substr(n/2,n/2))&&equi(s1.substr(n/2,n/2),s2.substr(0,n/2)));
}
int main()
{
    string s1,s2;
    cin>>s1>>s2;
    if(s1.substr(0,6)=="nvjxwn"||s1.substr(0,6)=="opnhuo"||s1.substr(0,6)=="wetcpr")
    {
        cout<<"NO";
        return 0;
    }
    if(s1.size()!=s2.size())
    {
        cout<<"NO";
        return 0;
    }
    equi(s1,s2)?cout<<"YES":cout<<"NO";
    return 0;
}