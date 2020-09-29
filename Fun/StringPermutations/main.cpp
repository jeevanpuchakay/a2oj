#include <bits/stdc++.h>
using namespace std;

typedef long double ld;
typedef long long int ll;
vector<vector<ll>> ladjlist;
ll lmax(ll x, ll y) { return (x > y) ? x : y; }
ll lmin(ll x, ll y) { return (x > y) ? y : x; }
// char special=['!'.'@','#','$'.'%','&','*'];

void go(int n,int len,string s,bool numbers){
    if(len==n){
        cout<<s<<endl;
        return;
    }
    for(int i=0;i<26;i++){
        go(n,len+1,s+char('a'+i),numbers);
        // go(n,len+1,s+char('A'+i),numbers);
    }
    if(numbers){
        for(int i=0;i<10;i++)
        go(n,len+1,s+char('0'+i),numbers);
    }
}

int main()
{
    int n;
    bool numbers;
    cout<<"enter the length of string: ";
    cin>>n;
    cout<<"Do you wanna include numbers in password(0 or 1): ";
    cin>>numbers;
    go(n,0,"",numbers);
    return 0;
}