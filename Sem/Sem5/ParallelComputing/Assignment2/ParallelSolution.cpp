#include <bits/stdc++.h>
#include <mpi.h>

using namespace std::chrono;
using namespace std;

typedef long double ld;
typedef long long int ll;
#define endl "\n"

ll totalNodesCount = 2 * 1e6;           // 2 Million
ld thresholdValue = 0.1624178165841584; // this is equivalent to 5 M, Nodes which are 1 second apart are 101 feet apart.
vector<pair<ll, float>> mWayTree[90][60][60][6];

void createTree()
{
    ll idPtr = 1;
    int degree, minute, seconds, fRange;
    float fValue;
    for (; idPtr <= totalNodesCount; idPtr++)
    {
        degree = rand() % 90, minute = rand() % 60, seconds = rand() % 60;
        fRange = rand() % 6; // lower limit of fraction range (fRange/6,(frange+1)/6]
        fValue = (1 / float(6)) * ((float(rand()) / RAND_MAX)) + fRange / float(6);
        // cout << degree << " " << minute << " " << seconds << " " << fRange << " " << fValue << endl;
        mWayTree[degree][minute][seconds][fRange].push_back({idPtr, fValue}); //insert the location in tree
    }
}
void checkForNodesWithIn5M(ll degree)
{
    for (ll minute = 0; minute < 60; minute++)
    {
        for (ll second = 0; second < 60; second++)
        {
            for (ll fValue = 0; fValue < 5; fValue++)
            {
                for (pair<ll, float> &Node1 : mWayTree[degree][minute][second][fValue])
                {
                    for (pair<ll, float> &Node2 : mWayTree[degree][minute][second][fValue + 1])
                    {
                        if (abs(Node1.second - Node2.second) <= thresholdValue)
                        {
                            // Node1 and Node2 are 5 M apart
                            cout << Node1.first << "(" << Node1.second << ") " << Node2.first << "(" << Node2.second << ")" << endl;
                        }
                    }
                }
            }
        }
    }
}
int main(int argc, char **argv)
{
    auto start = high_resolution_clock::now();
    freopen("outputWithParallelProgram.txt", "w", stdout);
    int rank, size;
    MPI_Init(&argc, &argv);
    MPI_Comm_rank(MPI_COMM_WORLD, &rank);
    MPI_Comm_size(MPI_COMM_WORLD, &size);
    if (rank == 0)
    {
        // Tree is created
        createTree();
        cout << "      Node1Id     "
             << "      Node2Id       " << endl;
        checkForNodesWithIn5M(0);
    }
    else
    {
        checkForNodesWithIn5M(rank);
    }
    MPI_Finalize();
    auto stop = high_resolution_clock::now();
    auto duration = duration_cast<microseconds>(stop - start);
    cout << "Time taken by parallel program: "
         << duration.count() << " microseconds" << endl;
}

//  mpic++ Solution.cpp -o Solution
// mpirun -np 90 --oversubscribe ./Solution

//mpic++ ParallelSolution.cpp -o ParallelSolution
//mpirun -np 90 --oversubscribe ./ParallelSolution