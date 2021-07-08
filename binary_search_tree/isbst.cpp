bool isbst(Node* root, Node* l= NULL, Node* r = NULL){
        if(root == NULL){
            return true;
        }
        if(l != NULL and root->data <= l->data){
            return false;
        }
        if(r != NULL and root->data >= r->data){
            return false;
        }
        
        return isbst(root->left, l , root) and isbst(root->right, root, r);
    }
    bool isBST(Node* root)
    {
        return isbst(root);
    }
