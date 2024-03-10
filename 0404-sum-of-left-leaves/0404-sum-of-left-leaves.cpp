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
    int num= 0;
    void findsum(TreeNode* root){
        if(!root){
           return ;
       }
        sumOfLeftLeaves(root->left);    
        sumOfLeftLeaves(root->right);
        if(root->left&&!root->left->left&&!root->left->right){
            num +=root->left->val;
        }
       
    }
    int sumOfLeftLeaves(TreeNode* root) {
       findsum(root);
        return num;
    }
};