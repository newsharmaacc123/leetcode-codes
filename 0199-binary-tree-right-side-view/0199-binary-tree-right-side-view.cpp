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
       vector<int> array;
       if(!root) {
        return array;
       }
       queue<TreeNode*> queue;
       queue.push(root);
       while(!queue.empty()){
        int num = queue.size(),i=0,k=0;
            while(i<num){
                if(queue.front()->left){
                    queue.push(queue.front()->left);
                }
                if(queue.front()->right){
                    queue.push(queue.front()->right);
                }
                if(i==num-1){
                    array.push_back(queue.front()->val) ;
                }
                i++;
                queue.pop();
            }
       }
       return array;
    }
};