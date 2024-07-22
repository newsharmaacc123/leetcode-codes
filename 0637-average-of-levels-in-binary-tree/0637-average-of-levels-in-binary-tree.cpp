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
    vector<double> averageOfLevels(TreeNode* root) {
        vector<double> array;
        
        if(!root){
            return array;
        }

        queue<TreeNode*> queue;

        queue.push(root);
        while(!queue.empty()){
            int num = queue.size();
            double avg=0;
            for(int i=0;i<num;i++){
                if(queue.front()->left){
                    queue.push(queue.front()->left);
                }
                if(queue.front()->right){
                    queue.push(queue.front()->right);
                }
                avg +=  queue.front()->val;
                queue.pop();
            }
            avg = avg/num;
            array.push_back(avg);
        }
        return array;
        
    }
};