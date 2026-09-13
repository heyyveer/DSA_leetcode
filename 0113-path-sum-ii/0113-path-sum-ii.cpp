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
    vector<int> curr;
    void checkpath(TreeNode* root , int targetSum , vector<vector<int>>& ans){
        if(root==NULL){
            return;
        }
        curr.push_back(root->val);
        if(root->left==NULL and root->right==NULL){
            if(targetSum==root->val){
                ans.push_back(curr);
            }
        }
        checkpath(root->left,targetSum-(root->val),ans);
        checkpath(root->right,targetSum-(root->val),ans);
        curr.pop_back();
    }
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        vector<vector<int>> ans;
        checkpath(root,targetSum,ans);
        return ans;
    }
};