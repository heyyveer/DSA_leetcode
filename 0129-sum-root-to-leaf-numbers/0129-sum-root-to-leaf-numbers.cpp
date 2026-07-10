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
    int ans=0;
    int currentNumber=0;
    void dfs(TreeNode* root, int currentNumber){
        if(root==NULL){
            return;
        }
        currentNumber=currentNumber*10+root->val;
        dfs(root->left,currentNumber);
        dfs(root->right,currentNumber);
        if(root->left == NULL && root->right == NULL){
            ans += currentNumber;
            return;
        }
    }
    int sumNumbers(TreeNode* root) {
        dfs(root,currentNumber);
        return ans;
    }
};