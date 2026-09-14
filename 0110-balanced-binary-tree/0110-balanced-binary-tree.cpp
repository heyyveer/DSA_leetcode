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
    bool ans = 1;
    int check(TreeNode* root){
        if(root==NULL){
            return 0;
        }
        int a = check(root->left);
        int b = check(root->right);
        if(abs(a-b)>1){
            ans=false;
        }
        return max(a,b)+1;
    }
    bool isBalanced(TreeNode* root) {
        check(root);
        return ans;
    }
};