 int height(TreeNode* root,int &value){
        if(!root){
            return 0;
        }
        int left = height(root->left,value);
        int right = height(root->right,value);
        if(abs(left-right)>1){
            value = 0;
        }
        return 1+max(left,right);
    }
    bool isBalanced(TreeNode* root) {
        int value = 1;
        // num(5);
       height(root,value);
        return value;
    }
