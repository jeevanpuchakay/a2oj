#include <bits/stdc++.h>
using namespace std;

int max(int x, int y) { return (x > y) ? x : y; }
int min(int x, int y) { return (x > y) ? y : x; }

/*

Best case O(n^2)
average case O(n^2)
worst case O(n^2)

*/


void insertionSort(int ray[],int n){
    int counter=0;
    for(int i=01;i<n;i++){
        for(int j=i-1;j>=0;j--){
            if(ray[j]>ray[j+1])
            {
                swap(ray[j],ray[j+1]),counter++;
            }
            else
            {
                break;
            }
            
        }
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
    insertionSort(ray,n);
    for(int i=0;i<n;i++){
        cout<<ray[i]<<" ";
    }
    return 0;
}
