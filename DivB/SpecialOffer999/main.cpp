#include <bits/stdc++.h>
using namespace std;

int main() {
    long long n , p ;
    cin>>n>>p;
    long long c = n+1 ;
    n++;
    long long i =10;
    while (n%i<=p) {
        c=n-(n%i);
        i*=10;
    }

    cout<<c-1<<endl;

    return 0;
}
