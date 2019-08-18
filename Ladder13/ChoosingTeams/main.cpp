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
#define imap map<int,int>
#define smap map<string,int>
#define set set<int>
typedef long double ld;
typedef long long int ll;
pair<char,int> func()
{
    pair<char,int> a;
    int d=1;
    char c='w';
    a=make_pair(c,d);
    return a;
}//func(int arr)
int main()
{
    int n=5;
    pair<char,int> q=func();
   cout<<q.first<<" "<<q.second; return 0;
}