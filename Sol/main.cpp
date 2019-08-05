#include<bits/stdc++.h>
using namespace std;
int main()
{
    int number_vertices,number_edges;
    cin>>number_vertices>>number_edges;
    int adjmatrix[number_vertices][number_vertices];//adjacency matrix
    //i didn't take input as we know it is already 0 to 9
    //now we're defining there're no edges between any two vertices
    //and after taking input about edges we'll modify those vertices which are connected
    for (int j = 0; j <number_vertices ; ++j) {
        for (int i = 0; i <number_vertices ; ++i) {
            adjmatrix[j][i]=0;
        }
    }
    int v1,v2;
    for(int i=0;i<number_edges;i++)
    {
        cin>>v1>>v2;
        adjmatrix[v1][v2]=1;//as 1 resembles edge between v1,v2
        adjmatrix[v2][v1]=1;//undirected graph
    }
    //printing all the vertices connected to 1
    for (int k = 0; k <number_vertices ; ++k) {
        if(adjmatrix[1][k]&&k!=1)//k!=1 bcoz we anyway know that 1 is connected to itself
            cout<<k<<" ";
    }
    //this is like we printing the 2nd row if the matrix has 1
}