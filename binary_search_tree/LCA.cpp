Node* LCA(Node *root, int n1, int n2)
{
    if(root == NULL){
        return NULL;
    }
    
    if(root->data < n1 and root->data < n2){
        LCA(root->right, n1, n2);
    }else if(root->data > n1 and root->data > n2){
        LCA(root->left, n1, n2);
    }else{
        return root;
    }
}
