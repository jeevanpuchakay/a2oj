#include <bits/stdc++.h>
using namespace std;

int max(int x, int y) { return (x > y) ? x : y; }
int min(int x, int y) { return (x > y) ? y : x; }

void selectionSort(int ray[],int n){
    int counter=0;
    for(int i=0;i<n-1;i++){
        int indexOfMinElement=i,flag=1;
        for(int j=i+1;j<n;j++){
            if(ray[indexOfMinElement]>ray[j]){
                indexOfMinElement=j;
                flag=0;
                counter++;
            }
        }
        swap(ray[indexOfMinElement],ray[i]);
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
    selectionSort(ray,n);
    for(int i=0;i<n;i++){
        cout<<ray[i]<<" ";
    }
    return 0;
}
