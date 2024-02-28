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
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>> output;
        if(root==NULL){
            return output;
        }
        queue<TreeNode*> newqueue;
        newqueue.push(root);
        while(!newqueue.empty()){
            vector<int> subnode;
            int size = newqueue.size();
            while(size-->0){
                root= newqueue.front();
                subnode.push_back(root->val);
                if(root->left!=NULL){
                    newqueue.push(root->left);
                }
                if(root->right!=NULL){
                    newqueue.push(root->right);
                }
                newqueue.pop();
            }
            
            output.push_back(subnode);
        }
        return output;
    }
};