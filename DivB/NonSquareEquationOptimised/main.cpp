
#include <bits/stdc++.h>
using namespace std;
long long s(long long x){
    long long ctr=0;
    while(x){
        ctr+=x%10;
        x/=10;}
    return ctr;}
int main(){
    long long n,x;
    cin>>n;
    x=sqrt(n);
    bool flag=false;
    for(;x>0&&n/x-x<=90;x--){
        if(x+s(x)==n/x){flag=true; break;}
    }
    (flag)?cout<<x:cout<<-1;
    return 0;}