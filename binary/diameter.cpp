int find(Node* root){
        if(root == NULL){
            return 0;
        }
        int lh = find(root->left);
        int rh = find(root->right);
        return 1 + max(lh, rh);
    }
    
    int diameter(Node* root) {
        if(root == NULL){
            return 0;
        }
        
        int hl = find(root->left);
        int hr = find(root->right);
        
        int dl = diameter(root->left);
        int dr = diameter(root->right);
        return max(hl + hr + 1, max(dl , dr));
    }
