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
    bool hasPathSum(TreeNode* root, int targetSum) {
        // vector<bool,int> leftdata;
        // vector<bool,int> leftdata;
        if(root==NULL){
            return false;
        }
        else if(root->val==targetSum&&!root->left&&!root->right){
            return true;
        }
        else{
            int newtarget = targetSum-root->val;
            return hasPathSum(root->left,newtarget)||hasPathSum(root->right,newtarget);
        }

    }
};