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
    vector<int> rightSideView(TreeNode* root) {
        vector<int> rightside;
        queue<TreeNode* > queue;
        if(!root){
            return rightside;
        }
        queue.push(root);
        while(!queue.empty()){
            int i = 0;
            int size = queue.size();
            while(i!=size){
                TreeNode * node = queue.front();
                queue.pop();
                if(node->left!=NULL){
                    queue.push(node->left);
                }
                if(node->right!=NULL){
                    queue.push(node->right);
                }
                if(i==size-1){
                    rightside.push_back(node->val);
                }
                i++;
            }
            
        }
        return rightside;
    }
};