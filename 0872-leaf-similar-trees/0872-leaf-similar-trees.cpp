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
    vector<int>root1leaf;
    vector<int>root2leaf;
    void dfs(TreeNode* root , vector<int>& leaf){
        if(root==NULL){
            return;
        }
        if(root->left==NULL && root->right==NULL){
            leaf.push_back(root->val);
        }
        dfs(root->left,leaf);
        dfs(root->right,leaf);
    }
    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
        dfs(root1,root1leaf);
        dfs(root2,root2leaf);
        return root1leaf == root2leaf;
    }
};