#include<bits/stdc++.h>
using namespace std;

int main(){
    int no_of_nodes,no_of_edges;
    cin>>no_of_nodes>>no_of_edges;
    int weights[n][n];int distance[n][n];
    for(int i=0;i<no_of_nodes;i++){
        for(int j=0;j<no_of_nodes;j++){
            distance[i][j]=32000;
        }
        distance[i][i]=0;
    }
    int src,dest,weight;
    for(int i=0;i<no_of_edges;i++){
        cin>>src>>dest>>weight;
        weights[src][dest]=weight;
        weights[src][dest]=weight;
        
        distance[src][dest]=weight;
        distance[src][dest]=weight;
    }

    for(int intermediate=0;intermediate<no_of_nodes;intermediate++){
        for(src=0;src<no_of_nodes;src++){
            for(dest=0;dest<no_of_nodes;dest++){
                if(distance[src][intermediate]==32000||distance[intermediate][dest]==32000)continue;
                if(distance[src][dest]>distance[src][intermediate]+distance[intermediate][dest]){
                    distance[src][dest]=distance[src][intermediate]+distance[intermediate][dest];
                }
            }
        }
    }

}