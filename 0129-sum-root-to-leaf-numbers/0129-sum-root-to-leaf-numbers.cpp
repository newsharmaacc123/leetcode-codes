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
    int ans =0;
    void calNumber(TreeNode* root,int val){
        if(!root){
            return ;
        }
        val = val*10;
        val+=root->val;
        if(!root->left&&!root->right){
            ans+=val;
            return;
        }
        calNumber(root->left,val);
        calNumber(root->right,val);

    }
    int sumNumbers(TreeNode* root) {
        int level = 0;
        calNumber(root,level);
        return ans;
    }
};