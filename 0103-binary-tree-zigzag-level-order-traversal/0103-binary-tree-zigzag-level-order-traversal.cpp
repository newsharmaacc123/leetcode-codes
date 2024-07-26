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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>> array;
        if(!root) return array;
        queue<TreeNode*> q;
        q.push(root);
        int level =0;
        while(!q.empty()){
            int num = q.size();
            vector<int> hello;
            for(int i=0;i<num;i++){
                    if(q.front()->right) q.push(q.front()->right);
                    if(q.front()->left) q.push(q.front()->left);
                    hello.push_back(q.front()->val);
                    q.pop();
            }
            if(level==0){
            reverse(hello.begin(),hello.end());   
            array.push_back(hello);
             level = 1;
            }
            else{   
            array.push_back(hello);
            level =0;
            }
    }
    return array;
    }
};