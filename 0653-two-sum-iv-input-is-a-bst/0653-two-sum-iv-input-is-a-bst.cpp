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
    void inorderTravel(TreeNode* root, vector<int> &inorder){
        if(root==NULL){
            return;
        }
        inorderTravel(root->left,inorder);
        inorder.push_back(root->val);
        inorderTravel(root->right,inorder);
    }
    bool findTarget(TreeNode* root, int k) {
       vector<int> inorder;
       inorderTravel(root,inorder);
       cout<<inorder.size();
       int i = 0;
       int j= inorder.size()-1;
        while(j>i){
            int num = inorder[i]+inorder[j];
            if(num==k){
                return true;
            }
            else if(num>k){
                j--;
            }
            else{
                i++;
            }
        }
        return false;
    }
};