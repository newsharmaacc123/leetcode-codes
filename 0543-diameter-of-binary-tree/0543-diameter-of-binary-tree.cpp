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
private:
    int maxdiameter = INT_MIN;
    int height(TreeNode* root){
        if(root==NULL){
            return 0;
        }
        int cleft = height(root->left);
        int cright = height(root->right);
        int curdiameter = cleft + cright;
        maxdiameter = max(curdiameter,maxdiameter);
        return max(cleft,cright)+1;
    }
public:
    int diameterOfBinaryTree(TreeNode* root) {
       height(root);
       return maxdiameter;
    }
};