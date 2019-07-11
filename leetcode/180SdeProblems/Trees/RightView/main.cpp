/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    int getMaxDepth(TreeNode* root){
        if(root==NULL)return 0;
        return 1+max(getMaxDepth(root->left),getMaxDepth(root->right));
    }
    void rightSideViewAtDepthI(vector<TreeNode*> &nodeAtLevelI,int h,int currLevel,TreeNode* currNode){
        if(currNode==NULL)return;
        if(nodeAtLevelI[currLevel]!=NULL){
            rightSideViewAtDepthI(nodeAtLevelI,h,currLevel+1,currNode->right);
            rightSideViewAtDepthI(nodeAtLevelI,h,currLevel+1,currNode->left);
        }
        else{
            nodeAtLevelI[currLevel]=currNode;
            rightSideViewAtDepthI(nodeAtLevelI,h,currLevel+1,currNode->right);
            rightSideViewAtDepthI(nodeAtLevelI,h,currLevel+1,currNode->left);
        }
        return;
    }
    vector<int> rightSideView(TreeNode* root) {
        int h=getMaxDepth(root);
        vector<TreeNode*> nodeAtLevelI(h+1,NULL);
        rightSideViewAtDepthI(nodeAtLevelI,h,0,root);
        vector<int> ans(h);
        for(int i=0;i<h;i++){
            // cout<<i<<"\n";
            ans[i]=nodeAtLevelI[i]->val;
        }
        return ans;
    }
};