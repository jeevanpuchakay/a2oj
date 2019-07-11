#include <bits/stdc++.h>
using namespace std;

int max(int x, int y) { return (x > y) ? x : y; }
int min(int x, int y) { return (x > y) ? y : x; }


/*

if sorted O(n)
average case O(n^2)
best case O(n^2)

*/




void bubbleSort(int ray[],int n){
    int counter=0;
    for(int i=0;i<n;i++){
        int flag=1;
        for(int j=i+1;j<n;j++){
            if(ray[i]>ray[j])
            swap(ray[i],ray[j]),flag=0,counter++;
        }
        if(flag)return;
    }
    cout<<"counter :"<<counter<<endl;
    return;
}

int main()
{
    int n; //size of the array
    cin>>n;
    int ray[n];
    for(int i=0;i<n;i++){
        cin>>ray[i];
    }
    bubbleSort(ray,n);
    for(int i=0;i<n;i++){
        cout<<ray[i]<<" ";
    }
    return 0;
}
