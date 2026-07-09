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
    vector<int> ans;
    TreeNode* prev=NULL;
    int currentCount=0;
    int maxCount=0; 
    void inorder(TreeNode* root){
        if(root==NULL){
            return;
        }
        inorder(root->left);
        if(prev==NULL){
            currentCount++;
        }
        else if(prev->val==root->val){
            currentCount++;
        }
        else{
            currentCount=1;
        }
        if(currentCount>maxCount){
            maxCount=currentCount;
            ans.clear();
            ans.push_back(root->val);
        }
        else if(currentCount==maxCount){
            ans.push_back(root->val);
        }
        prev=root;
        inorder(root->right);
    }
    vector<int> findMode(TreeNode* root) {
        inorder(root);
        return ans;
    }
};