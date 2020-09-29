#include<bits/stdc++.h>
using namespace std;

int main(){
    long long int t,a,b;
    cin>>t;
    while(t-->0){
        cin>>a>>b;
        if(b>=a){
            cout<<((b-a)/10)+((b-a)%10!=0)<<endl;
        }else{
            cout<<((a-b)/10)+((a-b)%10!=0)<<endl;
        }
    }
}