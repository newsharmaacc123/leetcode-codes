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
    bool isSameTree(TreeNode* p, TreeNode* q) {
        if(!p &&!q){
            return true;
        }
        if(p ==nullptr && q!=nullptr  || p!=nullptr&&q==nullptr){
            return false;
        }
        if(p->val!=q->val){
            return false;
        }
        bool valp = isSameTree(p->left,q->left);
        bool valq = isSameTree(p->right,q->right);
        bool res = valp&&valq;
        return res;

    }
};