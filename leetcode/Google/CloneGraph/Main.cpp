/*
// Definition for a Node.
*/

#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int val;
    vector<Node *> neighbors;

    Node()
    {
        val = 0;
        neighbors = vector<Node *>();
    }

    Node(int _val)
    {
        val = _val;
        neighbors = vector<Node *>();
    }

    Node(int _val, vector<Node *> _neighbors)
    {
        val = _val;
        neighbors = _neighbors;
    }
};

class Solution
{
    unordered_map<int, Node *> graphAddr;

public:
    Node *cloneGraph(Node *node)
    {
        if(node==NULL)return NULL;
        Node *currNode = graphAddr[node->val], *tempNode = NULL;
        if (currNode == NULL)
        {
            currNode = new Node(node->val);
            graphAddr[node->val] = currNode;
        }
        for (Node *eachNeighbour : node->neighbors)
        {
                        if(eachNeighbour==NULL)return NULL;

            tempNode =
                graphAddr[eachNeighbour->val];
            if (tempNode == NULL)
                tempNode = cloneGraph(eachNeighbour);
            // if (tempNode == NULL)
            // {
            //     tempNode = new Node(eachNeighbour->val);
            //     graphAddr[eachNeighbour->val] = tempNode;
            // }
            currNode->neighbors.push_back(tempNode);
        }
        return currNode;
    }
};
class Solution
{
    unordered_map<int, Node *> graphAddr;

public:
    Node *cloneGraph(Node *node)
    {
        if(node==NULL)return NULL;
        Node *currNode = graphAddr[node->val], *tempNode = NULL;
        if (currNode == NULL)
        {
            currNode = new Node(node->val);
            graphAddr[node->val] = currNode;
        }
        for (Node *eachNeighbour : node->neighbors)
        {
                        if(eachNeighbour==NULL)return NULL;

            tempNode =
                graphAddr[eachNeighbour->val];
            if (tempNode == NULL)
                tempNode = cloneGraph(eachNeighbour);
            // if (tempNode == NULL)
            // {
            //     tempNode = new Node(eachNeighbour->val);
            //     graphAddr[eachNeighbour->val] = tempNode;
            // }
            currNode->neighbors.push_back(tempNode);
        }
        return currNode;
    }
};