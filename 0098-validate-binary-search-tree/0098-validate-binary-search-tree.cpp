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
    bool getbst(TreeNode* root,long lower,long upper){
        if(!root) return true;
        if(root->val<=lower||root->val>=upper) return false;
        return getbst(root->left,lower,root->val)&&getbst(root->right,root->val,upper);
    }
    bool isValidBST(TreeNode* root) {
       return getbst(root,LONG_MIN,LONG_MAX);
    }
};