#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    for(int i=n;i;i--)
        if(!(n%i))
            cout << i << " ",n=i;
}