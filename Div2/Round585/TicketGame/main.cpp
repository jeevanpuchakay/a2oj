#include<bits/stdc++.h>
using namespace std;

typedef long double ld;
typedef long long int ll;
vector<vector<int> > adjlist;
#define max(x,y) (x>y)?x:y
#define min(x,y) (x>y)?y:x
#define sfor(i,n) for(ll i=0;i<n;i++)
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
#define iset set<int>
#define bit(x,i) (x&(1<<i))
//0 happ
//1 unhapp
ll go(ll sum1,ll sum2,ll a1,ll a2,ll a){
    if((sum1==sum2)&&(a1==a2)){
        return 0;
    } else if(a1==0){
       /* if((a2%2==0)){
            if((sum1==sum2)){
                if(a)
                    return 0;
                return 1;
            } else if(sum1>sum2){

            }*/
       if(a){
           if(sum1>sum2){
               if((sum1<=sum2+9)&&(a2>2))
               return go(sum1,sum2+9,a1,a2-1,0);
               else if((sum1<sum2+9))
                   return go(sum1,sum2+9,a1,a2-1,0);
               else if((sum1<=sum2+9)&&(a2<=2))
                   return go(sum1,sum2,a1,a2-1,0);
           }
           else if(sum1<sum2){
               return go(sum1,sum2)
           }
        }
    }
    else if(a2==0){
        if((sum1==sum2)&&(a1%2==0)){
            if(a)
                return 0;
            return 1;
        }
    }
    else{
        if(a){
            if(sum1>sum2){

            }
        }
    }
}
int main()
{
    ll n;
    cin>>n;
    string s;
    cin>>s;
    ll a1=0,sum1=0,a2=0,sum2=0;
    sfor(i,n/2){
        if(s[i]=='?')
            a1++;
        else{
            sum1+=s[i]-'0';
        }
    }
    ll i= n%2?n/2+1:n/2;
    for(;i<n;i++){
        if(s[i]=='?')
            a2++;
        else{
            sum2+=s[i]-'0';
        }
    }
    if((a1+a2)%2){
    cout<<"Monocarp";
        return 0;
}
    /*else if((sum1==sum2)&&((a1+a2)%2==0)){
        cout<<"Bicarp";
        return 0;
    }*/
    go
    return 0;
}
