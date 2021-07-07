class Solution {
public:
    
    TreeNode* findsucssesor(TreeNode* root){
        if(root->left ==NULL){
            return root;
        }else{
            return findsucssesor(root->left);
        }
    }
    
    TreeNode* deleteNode(TreeNode* root, int key) {
        if(root == NULL){
            return NULL;
        }
        if(key > root->val){
            root->right = deleteNode(root->right, key);
        }
        else if(key < root->val){
            root->left = deleteNode(root->left, key);
        }
        else{
            if(root->left != NULL and root->right != NULL){
                TreeNode* node = findsucssesor(root->right);
                root->val = node->val;
                root->right = deleteNode(root->right, node->val);
                return root;
            }
            else if(root->right != NULL){
                return root->right;
            }
            else if(root->left != NULL){
                return root->left;
            }
            else{
                return NULL;
            }
        }
        
        return root;
    }
};
