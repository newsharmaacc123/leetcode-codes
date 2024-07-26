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
        vector<vector<int>> array;
        if(!root) return array;
        queue<TreeNode*> q;
        q.push(root);
        while(!q.empty()){
            int num = q.size();
            vector<int> hello;
            for(int i=0;i<num;i++){
                if(q.front()->left) q.push(q.front()->left);
                if(q.front()->right) q.push(q.front()->right);
                hello.push_back(q.front()->val);
                q.pop();
            }
            array.push_back(hello);
        }
        return array;
    }
};