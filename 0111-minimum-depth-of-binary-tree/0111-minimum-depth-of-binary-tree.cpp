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
    int minDepth(TreeNode* root) {
        if(root == NULL){
            return 0;
        }
        if(!root->left){
        int right = minDepth(root->right)+1;
        return right;
        }
        if(!root->right){
        int left = minDepth(root->left)+1;
        return left;
        }
        int left = minDepth(root->left);
        int right = minDepth(root->right);
        int ans = min(left,right)+1;
        return ans;
        
    }
};