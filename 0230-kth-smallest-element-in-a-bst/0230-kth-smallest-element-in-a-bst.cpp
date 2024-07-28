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
    void cal(TreeNode* root, vector<int> &dp){
        if(!root){
            return;
        }
        cal(root->left,dp);
        dp.push_back(root->val) ;
        cal(root->right,dp);
    }
    int kthSmallest(TreeNode* root, int k) {
        vector<int> dp ;
        cal(root,dp);
        return dp[k-1];
    }
};