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
    void TreePath(TreeNode* root , string curr , vector<string>& ans){
        if(root==NULL){
            return;
        }
        if(curr.empty()){
            curr+=to_string(root->val);
        }else{
            curr+="->"+to_string(root->val);
        }
        if(root->left==NULL && root->right==NULL){
            ans.push_back(curr);
        }
        TreePath(root->left,curr,ans);
        TreePath(root->right,curr,ans);
        return;
    }
    vector<string> binaryTreePaths(TreeNode* root) {
        vector<string> ans;
        string curr = "";
        TreePath(root,curr,ans);
        return ans;
    }
};